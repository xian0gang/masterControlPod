#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ReadSetTing();

//    客户端
    tcp = new QTcpSocket();
    tm = new QTimer(this);
    tcp_connect_flag = false;
    connect(tm, SIGNAL(timeout()), this, SLOT(NewConnect()));
    tm->start(3000);
}

MainWindow::~MainWindow()
{
    WriteSetTing();
    delete ui;
}


//读取程序启动状态信息
int MainWindow::ReadSetTing()
{
    //设置配置文件的目录和位置，如果有，则不动，没有，会自动创建
    QSettings setting("setting.ini",QSettings::IniFormat);
    QString ip;
    QString port;
    if(setting.contains(tr("net/ip_one"))&&setting.contains(tr("net/port_one")))//如果已经存在这个文件，那就进行读取
    {
        ip = setting.value("net/ip_one").toString();//将读取出的数据进行使用
        port = setting.value("net/port_one").toString();
        ui->ip_lineEdit->setText(ip);
        ui->port_lineEdit->setText(port);
    }
    return 0;
}

//写程序状态信息
int MainWindow::WriteSetTing()
{
    QSettings setting("setting.ini",QSettings::IniFormat);
    QString ip;
    QString port;

    setting.beginGroup(tr("net"));//节点开始

    ip = ui->ip_lineEdit->text();
    port = ui->port_lineEdit->text();
    setting.setValue("ip_one",ip);//设置key和value，也就是参数和值
    setting.setValue("port_one",port);

    setting.endGroup();//节点结束

    return 0;
}

//连接测试服务端 192.168.1.129
void MainWindow::NewConnect()
{
    if(!tcp_connect_flag)
    {
        qDebug()<<"取消连接";
        tcp->abort();

        qDebug()<<"开始连接";
        QString ip = ui->ip_lineEdit->text();
        int port = ui->port_lineEdit->text().toInt();
        tcp->connectToHost(ip, port);

        if(!tcp->waitForConnected(300))
        {
            qDebug("连接服务器失败！");
            ui->statusBar->showMessage("连接服务器失败！");
            tcp_connect_flag = false;
        }
        else
        {
            qDebug("连接服务器成功！");
            ui->statusBar->showMessage("连接服务器成功！");
            tcp_connect_flag = true;
            tm->stop();
        }
    }
    connect(tcp,SIGNAL(readyRead()),this,SLOT(ReadMessage()));
    connect(tcp,SIGNAL(disconnected()),this,SLOT(repeat_connect_tcp()));

//    获取控制权，断开主控连接
    QString str = "FLIR_Camera_Ctr";
    QByteArray data(str.toLatin1());
    tcp->write(data);
}

//掉线重连 3s
void MainWindow::repeat_connect_tcp()
{
    tm->start(3000);
    tcp_connect_flag = false;
}

//服务端 接收消息 并 处理
void MainWindow::ReadMessage()
{
    QByteArray ba;
    ba = tcp->readAll();

    qDebug()<<"read:"<<ba;
}

/***********************************************************************************************
*函数名 : on_restart_btn_clicked
*函数功能描述 :  重启记录组件
*函数参数 :
*函数返回值 :
***********************************************************************************************/
void MainWindow::on_restart_btn_clicked()
{
    QByteArray ba;
    header head;
    memset(&head, 0, sizeof(header));
    head.type = 0x52;
    head.opcode = 0x06;
    head.reserved = 0;
    head.len = 1;
    head.data[0] = 0x02;
    ba.append((char*)&head, sizeof(head));
    tcp->write(ba);
}

/***********************************************************************************************
*函数名 : on_shutdown_btn_clicked
*函数功能描述 :  关闭记录组件
*函数参数 :
*函数返回值 :
***********************************************************************************************/
void MainWindow::on_shutdown_btn_clicked()
{
    QByteArray ba;
    header head;
    memset(&head, 0, sizeof(header));
    head.type = 0x52;
    head.opcode = 0x06;
    head.reserved = 0;
    head.len = 1;
    head.data[0] = 0x01;
    ba.append((char*)&head, sizeof(head));
    tcp->write(ba);
}

/***********************************************************************************************
*函数名 : on_get_m_btn_clicked
*函数功能描述 :  读取中波容量
*函数参数 :
*函数返回值 :
***********************************************************************************************/
void MainWindow::on_get_m_btn_clicked()
{
    QByteArray ba;
    header head;
    memset(&head, 0, sizeof(header));
    head.type = 0x52;
    head.opcode = 0x0B;
    head.reserved = 0;
    head.len = 1;
    head.data[0] = 0xFF;
    ba.append((char*)&head, sizeof(head));
    tcp->write(ba);
}

/***********************************************************************************************
*函数名 : on_get_l_btn_clicked
*函数功能描述 :  读取长波容量
*函数参数 :
*函数返回值 :
***********************************************************************************************/
void MainWindow::on_get_l_btn_clicked()
{
    QByteArray ba;
    header head;
    memset(&head, 0, sizeof(header));
    head.type = 0x52;
    head.opcode = 0x0C;
    head.reserved = 0;
    head.len = 1;
    head.data[0] = 0xFF;
    ba.append((char*)&head, sizeof(head));
    tcp->write(ba);
}

/***********************************************************************************************
*函数名 : on_get_s_btn_clicked
*函数功能描述 :  读取模拟视频容量
*函数参数 :
*函数返回值 :
***********************************************************************************************/
void MainWindow::on_get_s_btn_clicked()
{
    QByteArray ba;
    header head;
    memset(&head, 0, sizeof(header));
    head.type = 0x52;
    head.opcode = 0x0D;
    head.reserved = 0;
    head.len = 1;
    head.data[0] = 0xFF;
    ba.append((char*)&head, sizeof(head));
    tcp->write(ba);
}

/***********************************************************************************************
*函数名 : on_selftest_btn_clicked
*函数功能描述 :  记录组件维护自检
*函数参数 :
*函数返回值 :
***********************************************************************************************/
void MainWindow::on_selftest_btn_clicked()
{
    QByteArray ba;
    header head;
    memset(&head, 0, sizeof(header));
    head.type = 0x52;
    head.opcode = 0x05;
    head.reserved = 0;
    head.len = 1;
    head.data[0] = 0xFF;
    ba.append((char*)&head, sizeof(head));
    tcp->write(ba);
}

/***********************************************************************************************
*函数名 : on_record_start_btn_clicked
*函数功能描述 :  记录组件开始记录
*函数参数 :
*函数返回值 :
***********************************************************************************************/
void MainWindow::on_record_start_btn_clicked()
{
    QByteArray ba;
    header head;
    memset(&head, 0, sizeof(header));
    head.type = 0x52;
    head.opcode = 0x01;
    head.reserved = 0;
    head.len = 2;

    int index = ui->record_cBox->currentIndex() + 1;
    head.data[0] = index;
    head.data[1] = 0x01;

    ba.append((char*)&head, sizeof(head));
    tcp->write(ba);
}

/***********************************************************************************************
*函数名 : on_record_stop_btn_clicked
*函数功能描述 :  记录组件停止记录
*函数参数 :
*函数返回值 :
***********************************************************************************************/
void MainWindow::on_record_stop_btn_clicked()
{
    QByteArray ba;
    header head;
    memset(&head, 0, sizeof(header));
    head.type = 0x52;
    head.opcode = 0x01;
    head.reserved = 0;
    head.len = 2;

    int index = ui->record_cBox->currentIndex() + 1;
    head.data[0] = index;
    head.data[1] = 0x02;

    ba.append((char*)&head, sizeof(head));
    tcp->write(ba);
}

/***********************************************************************************************
*函数名 : on_nuc_btn_clicked
*函数功能描述 :  nuc矫正
*函数参数 :
*函数返回值 :
***********************************************************************************************/
void MainWindow::on_nuc_btn_clicked()
{
    QByteArray ba;
    header head;
    memset(&head, 0, sizeof(header));
    head.type = 0x52;
    head.opcode = 0x04;
    head.reserved = 0;
    head.len = 1;

    int index = ui->nuc_cBox->currentIndex() + 1;
    head.data[0] = index;

    ba.append((char*)&head, sizeof(head));
    tcp->write(ba);
}
