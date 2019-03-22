#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QTimer>
#include <QTcpServer>
#include <QFile>
#include <QBuffer>
#include <QSettings>

struct header{
    unsigned char type;
    unsigned char opcode;
    unsigned short reserved;
    int len;
    unsigned char data[16];
};

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    int ReadSetTing();
    int WriteSetTing();

private:
    Ui::MainWindow *ui;
    QTcpSocket *tcp;
    QTimer *tm;
    bool tcp_connect_flag;

private slots:
    void NewConnect();
    void ReadMessage();
    void repeat_connect_tcp();
    void on_restart_btn_clicked();
    void on_shutdown_btn_clicked();
    void on_get_m_btn_clicked();
    void on_get_l_btn_clicked();
    void on_get_s_btn_clicked();
    void on_selftest_btn_clicked();
    void on_record_start_btn_clicked();
    void on_record_stop_btn_clicked();
};

#endif // MAINWINDOW_H
