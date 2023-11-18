/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btnMatrix;
    QTableWidget *tblMatrixA;
    QTableWidget *tblMatrixB;
    QTableWidget *tableWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QSpinBox *spnRow;
    QSpinBox *spnColumn;
    QPushButton *btnFloyd;
    QLineEdit *edtItem;
    QMenuBar *menubar;
    QMenu *menuCalculate;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1542, 457);
        QFont font;
        font.setPointSize(9);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btnMatrix = new QPushButton(centralwidget);
        btnMatrix->setObjectName(QString::fromUtf8("btnMatrix"));
        btnMatrix->setGeometry(QRect(10, 150, 171, 41));
        tblMatrixA = new QTableWidget(centralwidget);
        if (tblMatrixA->columnCount() < 6)
            tblMatrixA->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tblMatrixA->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tblMatrixA->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tblMatrixA->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tblMatrixA->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tblMatrixA->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tblMatrixA->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (tblMatrixA->rowCount() < 2)
            tblMatrixA->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tblMatrixA->setVerticalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tblMatrixA->setVerticalHeaderItem(1, __qtablewidgetitem7);
        tblMatrixA->setObjectName(QString::fromUtf8("tblMatrixA"));
        tblMatrixA->setGeometry(QRect(10, 10, 621, 131));
        tblMatrixB = new QTableWidget(centralwidget);
        if (tblMatrixB->columnCount() < 4)
            tblMatrixB->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tblMatrixB->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tblMatrixB->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tblMatrixB->setHorizontalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tblMatrixB->setHorizontalHeaderItem(3, __qtablewidgetitem11);
        if (tblMatrixB->rowCount() < 3)
            tblMatrixB->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tblMatrixB->setVerticalHeaderItem(0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tblMatrixB->setVerticalHeaderItem(1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tblMatrixB->setVerticalHeaderItem(2, __qtablewidgetitem14);
        tblMatrixB->setObjectName(QString::fromUtf8("tblMatrixB"));
        tblMatrixB->setGeometry(QRect(660, 10, 421, 131));
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem18);
        if (tableWidget->rowCount() < 2)
            tableWidget->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem20);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(1120, 10, 421, 131));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(640, 60, 49, 16));
        QFont font1;
        font1.setPointSize(15);
        label->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(1090, 60, 49, 16));
        label_2->setFont(font1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 220, 51, 31));
        label_3->setFont(font1);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 260, 81, 31));
        label_4->setFont(font1);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 300, 101, 31));
        label_5->setFont(font1);
        spnRow = new QSpinBox(centralwidget);
        spnRow->setObjectName(QString::fromUtf8("spnRow"));
        spnRow->setGeometry(QRect(160, 230, 91, 22));
        spnColumn = new QSpinBox(centralwidget);
        spnColumn->setObjectName(QString::fromUtf8("spnColumn"));
        spnColumn->setGeometry(QRect(160, 270, 91, 22));
        btnFloyd = new QPushButton(centralwidget);
        btnFloyd->setObjectName(QString::fromUtf8("btnFloyd"));
        btnFloyd->setGeometry(QRect(20, 350, 161, 41));
        edtItem = new QLineEdit(centralwidget);
        edtItem->setObjectName(QString::fromUtf8("edtItem"));
        edtItem->setGeometry(QRect(160, 310, 281, 22));
        edtItem->setReadOnly(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1542, 22));
        menuCalculate = new QMenu(menubar);
        menuCalculate->setObjectName(QString::fromUtf8("menuCalculate"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuCalculate->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnMatrix->setText(QCoreApplication::translate("MainWindow", "Calculate result matrix", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tblMatrixA->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "1(real)", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tblMatrixA->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "1(imag)", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tblMatrixA->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "2(real)", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tblMatrixA->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "2(imag)", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tblMatrixA->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "3(real)", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tblMatrixA->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "3(imag)", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tblMatrixA->verticalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tblMatrixA->verticalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tblMatrixB->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "1(real)", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tblMatrixB->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "1(imag)", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tblMatrixB->horizontalHeaderItem(2);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "2(real)", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tblMatrixB->horizontalHeaderItem(3);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "2(imag)", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tblMatrixB->verticalHeaderItem(0);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tblMatrixB->verticalHeaderItem(1);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tblMatrixB->verticalHeaderItem(2);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "1(real)", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "1(imag)", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "2(real)", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "2(imag)", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Row", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Column", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Item Value", nullptr));
        btnFloyd->setText(QCoreApplication::translate("MainWindow", "Calculate Floyds Number", nullptr));
        menuCalculate->setTitle(QCoreApplication::translate("MainWindow", "Calculate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
