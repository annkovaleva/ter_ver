/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_za;
    QTextEdit *zada4a;
    QGroupBox *groupBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout_11;
    QRadioButton *shema1;
    QRadioButton *shema2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *label_sh;
    QLabel *shema;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_9;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_q1;
    QDoubleSpinBox *q1;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_q2;
    QDoubleSpinBox *q2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_q3;
    QDoubleSpinBox *q3;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_q4;
    QDoubleSpinBox *q4;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_q5;
    QDoubleSpinBox *q5;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_fo;
    QLabel *formula;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *button;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_ot;
    QLineEdit *otvet;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(707, 338);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_12 = new QVBoxLayout(centralWidget);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_za = new QLabel(centralWidget);
        label_za->setObjectName(QString::fromUtf8("label_za"));
        label_za->setMaximumSize(QSize(16777215, 15));

        verticalLayout_2->addWidget(label_za);

        zada4a = new QTextEdit(centralWidget);
        zada4a->setObjectName(QString::fromUtf8("zada4a"));
        zada4a->setMinimumSize(QSize(0, 0));
        zada4a->setMaximumSize(QSize(16777215, 100));
        zada4a->setReadOnly(true);

        verticalLayout_2->addWidget(zada4a);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(0, 75));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 20, 65, 42));
        verticalLayout_11 = new QVBoxLayout(widget);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        shema1 = new QRadioButton(widget);
        shema1->setObjectName(QString::fromUtf8("shema1"));
        shema1->setChecked(true);

        verticalLayout_11->addWidget(shema1);

        shema2 = new QRadioButton(widget);
        shema2->setObjectName(QString::fromUtf8("shema2"));

        verticalLayout_11->addWidget(shema2);


        verticalLayout_2->addWidget(groupBox);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_sh = new QLabel(centralWidget);
        label_sh->setObjectName(QString::fromUtf8("label_sh"));
        label_sh->setMaximumSize(QSize(16777215, 15));

        verticalLayout->addWidget(label_sh);

        shema = new QLabel(centralWidget);
        shema->setObjectName(QString::fromUtf8("shema"));
        shema->setMinimumSize(QSize(400, 152));
        shema->setMaximumSize(QSize(16777215, 152));

        verticalLayout->addWidget(shema);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_10->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_q1 = new QLabel(centralWidget);
        label_q1->setObjectName(QString::fromUtf8("label_q1"));

        verticalLayout_3->addWidget(label_q1);

        q1 = new QDoubleSpinBox(centralWidget);
        q1->setObjectName(QString::fromUtf8("q1"));
        q1->setDecimals(3);
        q1->setMaximum(1.000000000000000);
        q1->setSingleStep(0.010000000000000);

        verticalLayout_3->addWidget(q1);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_q2 = new QLabel(centralWidget);
        label_q2->setObjectName(QString::fromUtf8("label_q2"));

        verticalLayout_4->addWidget(label_q2);

        q2 = new QDoubleSpinBox(centralWidget);
        q2->setObjectName(QString::fromUtf8("q2"));
        q2->setDecimals(3);
        q2->setMaximum(1.000000000000000);
        q2->setSingleStep(0.010000000000000);

        verticalLayout_4->addWidget(q2);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_q3 = new QLabel(centralWidget);
        label_q3->setObjectName(QString::fromUtf8("label_q3"));

        verticalLayout_5->addWidget(label_q3);

        q3 = new QDoubleSpinBox(centralWidget);
        q3->setObjectName(QString::fromUtf8("q3"));
        q3->setDecimals(3);
        q3->setMaximum(1.000000000000000);
        q3->setSingleStep(0.010000000000000);

        verticalLayout_5->addWidget(q3);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_q4 = new QLabel(centralWidget);
        label_q4->setObjectName(QString::fromUtf8("label_q4"));

        verticalLayout_6->addWidget(label_q4);

        q4 = new QDoubleSpinBox(centralWidget);
        q4->setObjectName(QString::fromUtf8("q4"));
        q4->setDecimals(3);
        q4->setMaximum(1.000000000000000);
        q4->setSingleStep(0.010000000000000);

        verticalLayout_6->addWidget(q4);


        horizontalLayout_2->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_q5 = new QLabel(centralWidget);
        label_q5->setObjectName(QString::fromUtf8("label_q5"));

        verticalLayout_7->addWidget(label_q5);

        q5 = new QDoubleSpinBox(centralWidget);
        q5->setObjectName(QString::fromUtf8("q5"));
        q5->setDecimals(3);
        q5->setMaximum(1.000000000000000);
        q5->setSingleStep(0.010000000000000);

        verticalLayout_7->addWidget(q5);


        horizontalLayout_2->addLayout(verticalLayout_7);


        verticalLayout_9->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_9);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_fo = new QLabel(centralWidget);
        label_fo->setObjectName(QString::fromUtf8("label_fo"));

        verticalLayout_8->addWidget(label_fo);

        formula = new QLabel(centralWidget);
        formula->setObjectName(QString::fromUtf8("formula"));
        formula->setMinimumSize(QSize(300, 0));

        verticalLayout_8->addWidget(formula);


        horizontalLayout_3->addLayout(verticalLayout_8);


        verticalLayout_10->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        button = new QPushButton(centralWidget);
        button->setObjectName(QString::fromUtf8("button"));

        horizontalLayout_5->addWidget(button);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_ot = new QLabel(centralWidget);
        label_ot->setObjectName(QString::fromUtf8("label_ot"));

        horizontalLayout_4->addWidget(label_ot);

        otvet = new QLineEdit(centralWidget);
        otvet->setObjectName(QString::fromUtf8("otvet"));
        otvet->setReadOnly(true);

        horizontalLayout_4->addWidget(otvet);


        horizontalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_10->addLayout(horizontalLayout_5);


        verticalLayout_12->addLayout(verticalLayout_10);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 707, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_za->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\207\320\260", nullptr));
        zada4a->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\320\255\320\273\320\265\320\272\321\202\321\200\320\270\321\207\320\265\321\201\320\272\320\260\321\217 \321\206\320\265\320\277\321\214 \320\270\320\267 \320\277\321\217\321\202\320\270 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\276\320\262 \321\201\320\276\321\201\321\202\320\260\320\262\320\273\320\265\320\275\320\260 \320\277\320\276 \321\201\321\205\320\265\320\274\320\265, \320\277\321\200\320\270\320\262\320\265\320\264\320\265\320\275\320\275\320\276\320\271 \320\275\320\260 \321\200\320\270\321\201"
                        "\321\203\320\275\320\272\320\265. \320\235\320\260\320\271\321\202\320\270 \320\262\320\265\321\200\320\276\321\217\321\202\320\275\320\276\321\201\321\202\321\214 \321\200\320\260\320\267\321\200\321\213\320\262\320\260 \321\206\320\265\320\277\320\270, \320\277\321\200\320\265\320\264\320\277\320\276\320\273\320\260\320\263\320\260\321\217, \321\207\321\202\320\276 \320\276\321\202\320\272\320\260\320\267\321\213 \320\276\321\202\320\264\320\265\320\273\321\214\320\275\321\213\321\205 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\276\320\262 \320\275\320\265\320\267\320\260\320\262\320\270\321\201\320\270\320\274\321\213 \320\270 \321\200\320\260\320\262\320\275\321\213 q (i = 1,2,3,4,5).</span></p></body></html>", nullptr));
        groupBox->setTitle(QString());
        shema1->setText(QCoreApplication::translate("MainWindow", "\320\241\321\205\320\265\320\274\320\260 1", nullptr));
        shema2->setText(QCoreApplication::translate("MainWindow", "\320\241\321\205\320\265\320\274\320\260 2", nullptr));
        label_sh->setText(QCoreApplication::translate("MainWindow", "\320\241\321\205\320\265\320\274\320\260", nullptr));
        shema->setText(QString());
        label_q1->setText(QCoreApplication::translate("MainWindow", "q1", nullptr));
        label_q2->setText(QCoreApplication::translate("MainWindow", "q2", nullptr));
        label_q3->setText(QCoreApplication::translate("MainWindow", "q3", nullptr));
        label_q4->setText(QCoreApplication::translate("MainWindow", "q4", nullptr));
        label_q5->setText(QCoreApplication::translate("MainWindow", "q5", nullptr));
        label_fo->setText(QCoreApplication::translate("MainWindow", "\320\244\320\276\321\200\320\274\321\203\320\273\321\213", nullptr));
        formula->setText(QString());
        button->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\207\320\270\321\201\320\273\320\270\321\202\321\214", nullptr));
        label_ot->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\262\320\265\321\202", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\267\321\200\321\213\320\262 \321\206\320\265\320\277\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
