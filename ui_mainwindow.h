/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QPushButton *restart_btn;
    QPushButton *shutdown_btn;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QPushButton *get_s_btn;
    QPushButton *get_m_btn;
    QPushButton *get_l_btn;
    QLabel *get_m_lab;
    QLabel *get_l_lab;
    QLabel *get_s_lab;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *ip_lineEdit;
    QLabel *label_2;
    QLineEdit *port_lineEdit;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *selftest_btn;
    QLabel *selftest_lab;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_5;
    QComboBox *record_cBox;
    QPushButton *record_start_btn;
    QPushButton *record_stop_btn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(735, 471);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        restart_btn = new QPushButton(groupBox);
        restart_btn->setObjectName(QStringLiteral("restart_btn"));

        gridLayout_2->addWidget(restart_btn, 0, 0, 1, 1);

        shutdown_btn = new QPushButton(groupBox);
        shutdown_btn->setObjectName(QStringLiteral("shutdown_btn"));

        gridLayout_2->addWidget(shutdown_btn, 0, 1, 1, 1);


        gridLayout->addWidget(groupBox, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        get_s_btn = new QPushButton(groupBox_2);
        get_s_btn->setObjectName(QStringLiteral("get_s_btn"));

        gridLayout_3->addWidget(get_s_btn, 2, 0, 1, 1);

        get_m_btn = new QPushButton(groupBox_2);
        get_m_btn->setObjectName(QStringLiteral("get_m_btn"));

        gridLayout_3->addWidget(get_m_btn, 0, 0, 1, 1);

        get_l_btn = new QPushButton(groupBox_2);
        get_l_btn->setObjectName(QStringLiteral("get_l_btn"));

        gridLayout_3->addWidget(get_l_btn, 1, 0, 1, 1);

        get_m_lab = new QLabel(groupBox_2);
        get_m_lab->setObjectName(QStringLiteral("get_m_lab"));
        get_m_lab->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(get_m_lab, 0, 1, 1, 1);

        get_l_lab = new QLabel(groupBox_2);
        get_l_lab->setObjectName(QStringLiteral("get_l_lab"));
        get_l_lab->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(get_l_lab, 1, 1, 1, 1);

        get_s_lab = new QLabel(groupBox_2);
        get_s_lab->setObjectName(QStringLiteral("get_s_lab"));
        get_s_lab->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(get_s_lab, 2, 1, 1, 1);


        gridLayout->addWidget(groupBox_2, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        ip_lineEdit = new QLineEdit(centralWidget);
        ip_lineEdit->setObjectName(QStringLiteral("ip_lineEdit"));

        horizontalLayout->addWidget(ip_lineEdit);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        port_lineEdit = new QLineEdit(centralWidget);
        port_lineEdit->setObjectName(QStringLiteral("port_lineEdit"));

        horizontalLayout->addWidget(port_lineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_6, 0, 0, 1, 1);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_7, 0, 1, 1, 1);

        selftest_btn = new QPushButton(groupBox_3);
        selftest_btn->setObjectName(QStringLiteral("selftest_btn"));

        gridLayout_4->addWidget(selftest_btn, 1, 0, 1, 1);

        selftest_lab = new QLabel(groupBox_3);
        selftest_lab->setObjectName(QStringLiteral("selftest_lab"));
        selftest_lab->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(selftest_lab, 1, 1, 1, 1);


        gridLayout->addWidget(groupBox_3, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 1);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_5 = new QGridLayout(groupBox_4);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        record_cBox = new QComboBox(groupBox_4);
        record_cBox->setObjectName(QStringLiteral("record_cBox"));

        gridLayout_5->addWidget(record_cBox, 0, 0, 1, 1);

        record_start_btn = new QPushButton(groupBox_4);
        record_start_btn->setObjectName(QStringLiteral("record_start_btn"));

        gridLayout_5->addWidget(record_start_btn, 0, 1, 1, 1);

        record_stop_btn = new QPushButton(groupBox_4);
        record_stop_btn->setObjectName(QStringLiteral("record_stop_btn"));

        gridLayout_5->addWidget(record_stop_btn, 0, 2, 1, 1);


        gridLayout->addWidget(groupBox_4, 4, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 735, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "\345\205\263\346\234\272/\351\207\215\345\220\257", 0));
        restart_btn->setText(QApplication::translate("MainWindow", "\350\256\260\345\275\225\347\273\204\344\273\266\351\207\215\345\220\257", 0));
        shutdown_btn->setText(QApplication::translate("MainWindow", "\350\256\260\345\275\225\347\273\204\344\273\266\345\205\263\346\234\272", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\345\256\271\351\207\217", 0));
        get_s_btn->setText(QApplication::translate("MainWindow", "\350\257\273\345\217\226\346\250\241\346\213\237\350\247\206\351\242\221\345\256\271\351\207\217", 0));
        get_m_btn->setText(QApplication::translate("MainWindow", "\350\257\273\345\217\226\344\270\255\346\263\242\345\256\271\351\207\217", 0));
        get_l_btn->setText(QApplication::translate("MainWindow", "\350\257\273\345\217\226\351\225\277\346\263\242\345\256\271\351\207\217", 0));
        get_m_lab->setText(QApplication::translate("MainWindow", "0", 0));
        get_l_lab->setText(QApplication::translate("MainWindow", "0", 0));
        get_s_lab->setText(QApplication::translate("MainWindow", "0", 0));
        label->setText(QApplication::translate("MainWindow", "IP:", 0));
        label_2->setText(QApplication::translate("MainWindow", "PORT:", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\350\207\252\346\243\200", 0));
        label_6->setText(QApplication::translate("MainWindow", "\344\270\212\347\224\265\350\207\252\346\243\200\347\212\266\346\200\201\357\274\232", 0));
        label_7->setText(QApplication::translate("MainWindow", "\346\210\220\345\212\237", 0));
        selftest_btn->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\350\256\260\345\275\225\344\273\252\347\273\264\346\212\244\350\207\252\346\243\200", 0));
        selftest_lab->setText(QApplication::translate("MainWindow", "\345\276\205\346\233\264\346\226\260", 0));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\350\256\260\345\275\225", 0));
        record_cBox->clear();
        record_cBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\347\203\255\345\203\217\344\273\2521\350\256\260\345\275\225", 0)
         << QApplication::translate("MainWindow", "\347\203\255\345\203\217\344\273\2522\350\256\260\345\275\225", 0)
         << QApplication::translate("MainWindow", "\345\220\214\346\227\266\350\256\260\345\275\225", 0)
        );
        record_start_btn->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\350\256\260\345\275\225", 0));
        record_stop_btn->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\350\256\260\345\275\225", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
