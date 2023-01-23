/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *about_author;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label_result_V;
    QLabel *label_vvod;
    QLineEdit *lineEdit_vvod;
    QLabel *label_zadacha;
    QPushButton *Button_calc;
    QLabel *label_result_S;
    QPlainTextEdit *plainTextEdit_report;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(555, 332);
        MainWindow->setMinimumSize(QSize(555, 0));
        MainWindow->setMaximumSize(QSize(555, 16777215));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(235, 229, 223);"));
        about_author = new QAction(MainWindow);
        about_author->setObjectName(QString::fromUtf8("about_author"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_result_V = new QLabel(centralwidget);
        label_result_V->setObjectName(QString::fromUtf8("label_result_V"));
        label_result_V->setMaximumSize(QSize(47, 13));

        gridLayout->addWidget(label_result_V, 2, 2, 1, 1);

        label_vvod = new QLabel(centralwidget);
        label_vvod->setObjectName(QString::fromUtf8("label_vvod"));
        label_vvod->setMaximumSize(QSize(111, 21));
        QFont font;
        font.setPointSize(9);
        label_vvod->setFont(font);
        label_vvod->setStyleSheet(QString::fromUtf8("alternate-background-color: rgb(255, 255, 171);"));

        gridLayout->addWidget(label_vvod, 1, 0, 1, 1);

        lineEdit_vvod = new QLineEdit(centralwidget);
        lineEdit_vvod->setObjectName(QString::fromUtf8("lineEdit_vvod"));
        lineEdit_vvod->setMaximumSize(QSize(113, 20));
        lineEdit_vvod->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(lineEdit_vvod, 2, 0, 1, 1);

        label_zadacha = new QLabel(centralwidget);
        label_zadacha->setObjectName(QString::fromUtf8("label_zadacha"));
        label_zadacha->setMaximumSize(QSize(541, 31));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        label_zadacha->setFont(font1);

        gridLayout->addWidget(label_zadacha, 0, 0, 1, 3);

        Button_calc = new QPushButton(centralwidget);
        Button_calc->setObjectName(QString::fromUtf8("Button_calc"));
        Button_calc->setMaximumSize(QSize(151, 41));
        Button_calc->setFont(font);
        Button_calc->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 252, 255);"));

        gridLayout->addWidget(Button_calc, 4, 0, 1, 1);

        label_result_S = new QLabel(centralwidget);
        label_result_S->setObjectName(QString::fromUtf8("label_result_S"));
        label_result_S->setMaximumSize(QSize(47, 13));

        gridLayout->addWidget(label_result_S, 4, 2, 1, 1);

        plainTextEdit_report = new QPlainTextEdit(centralwidget);
        plainTextEdit_report->setObjectName(QString::fromUtf8("plainTextEdit_report"));

        gridLayout->addWidget(plainTextEdit_report, 3, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 555, 25));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(about_author);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\207\320\260 1", nullptr));
        about_author->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261 \320\260\320\262\321\202\320\276\321\200\320\265", nullptr));
        label_result_V->setText(QString());
        label_vvod->setText(QCoreApplication::translate("MainWindow", "\320\224\320\273\320\270\320\275\320\260 \321\200\320\265\320\261\321\200\320\260 \320\272\321\203\320\261\320\260:", nullptr));
        lineEdit_vvod->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_zadacha->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\320\275\320\260 \320\264\320\273\320\270\320\275\320\260 \321\200\320\265\320\261\321\200\320\260 \320\272\321\203\320\261\320\260. \320\235\320\260\320\271\321\202\320\270 \320\276\320\261\321\212\321\221\320\274 \320\272\321\203\320\261\320\260 \320\270 \320\277\320\273\320\276\321\211\320\260\320\264\321\214 \320\265\320\263\320\276 \320\261\320\276\320\272\320\276\320\262\320\276\320\271 \320\277\320\276\320\262\320\265\321\200\321\205\320\275\320\276\321\201\321\202\320\270", nullptr));
        Button_calc->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\207\320\270\321\201\320\273\320\270\321\202\321\214", nullptr));
        label_result_S->setText(QString());
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
