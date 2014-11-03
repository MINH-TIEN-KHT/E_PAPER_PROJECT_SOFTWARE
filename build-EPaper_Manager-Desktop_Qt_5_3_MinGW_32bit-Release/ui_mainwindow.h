/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QComboBox *comportnameBox;
    QPushButton *connectButton;
    QTreeWidget *danhmuctreeWidget;
    QGroupBox *groupBox_2;
    QFrame *displayframe;
    QLineEdit *vendorlineEdit;
    QLineEdit *brandlineEdit;
    QLineEdit *newpricelineEdit;
    QComboBox *iconBox;
    QPushButton *sendButton;
    QLineEdit *oldpricelineEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(480, 320);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 91, 251));
        groupBox->setAlignment(Qt::AlignCenter);
        comportnameBox = new QComboBox(groupBox);
        comportnameBox->setObjectName(QStringLiteral("comportnameBox"));
        comportnameBox->setGeometry(QRect(10, 30, 71, 22));
        connectButton = new QPushButton(groupBox);
        connectButton->setObjectName(QStringLiteral("connectButton"));
        connectButton->setGeometry(QRect(10, 70, 71, 23));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        connectButton->setFont(font);
        danhmuctreeWidget = new QTreeWidget(centralWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(danhmuctreeWidget);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(danhmuctreeWidget);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(danhmuctreeWidget);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(danhmuctreeWidget);
        new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(__qtreewidgetitem3);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(danhmuctreeWidget);
        new QTreeWidgetItem(__qtreewidgetitem4);
        new QTreeWidgetItem(__qtreewidgetitem4);
        new QTreeWidgetItem(__qtreewidgetitem4);
        new QTreeWidgetItem(__qtreewidgetitem4);
        new QTreeWidgetItem(__qtreewidgetitem4);
        danhmuctreeWidget->setObjectName(QStringLiteral("danhmuctreeWidget"));
        danhmuctreeWidget->setEnabled(false);
        danhmuctreeWidget->setGeometry(QRect(110, 10, 141, 251));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(260, 10, 211, 251));
        groupBox_2->setAlignment(Qt::AlignCenter);
        displayframe = new QFrame(groupBox_2);
        displayframe->setObjectName(QStringLiteral("displayframe"));
        displayframe->setGeometry(QRect(20, 170, 172, 72));
        displayframe->setMinimumSize(QSize(172, 72));
        displayframe->setMaximumSize(QSize(172, 72));
        displayframe->setAutoFillBackground(false);
        displayframe->setStyleSheet(QStringLiteral("border-color: rgb(59, 59, 59);"));
        displayframe->setFrameShape(QFrame::WinPanel);
        displayframe->setFrameShadow(QFrame::Plain);
        displayframe->setLineWidth(1);
        displayframe->setMidLineWidth(1);
        vendorlineEdit = new QLineEdit(groupBox_2);
        vendorlineEdit->setObjectName(QStringLiteral("vendorlineEdit"));
        vendorlineEdit->setGeometry(QRect(10, 30, 191, 21));
        vendorlineEdit->setEchoMode(QLineEdit::Normal);
        brandlineEdit = new QLineEdit(groupBox_2);
        brandlineEdit->setObjectName(QStringLiteral("brandlineEdit"));
        brandlineEdit->setGeometry(QRect(10, 60, 191, 21));
        newpricelineEdit = new QLineEdit(groupBox_2);
        newpricelineEdit->setObjectName(QStringLiteral("newpricelineEdit"));
        newpricelineEdit->setGeometry(QRect(10, 90, 91, 21));
        iconBox = new QComboBox(groupBox_2);
        iconBox->setObjectName(QStringLiteral("iconBox"));
        iconBox->setGeometry(QRect(10, 120, 91, 22));
        sendButton = new QPushButton(groupBox_2);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sendButton->setGeometry(QRect(120, 120, 81, 23));
        sendButton->setFont(font);
        oldpricelineEdit = new QLineEdit(groupBox_2);
        oldpricelineEdit->setObjectName(QStringLiteral("oldpricelineEdit"));
        oldpricelineEdit->setGeometry(QRect(110, 90, 91, 21));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 480, 21));
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
        groupBox->setTitle(QApplication::translate("MainWindow", "K\341\272\277t n\341\273\221i thi\341\272\277t b\341\273\213", 0));
        connectButton->setText(QApplication::translate("MainWindow", "K\341\272\277t n\341\273\221i", 0));
        QTreeWidgetItem *___qtreewidgetitem = danhmuctreeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "Danh m\341\273\245c", 0));

        const bool __sortingEnabled = danhmuctreeWidget->isSortingEnabled();
        danhmuctreeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = danhmuctreeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("MainWindow", "D\341\272\247u g\341\273\231i \304\221\341\272\247u", 0));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QApplication::translate("MainWindow", "Clear b\341\272\241c h\303\240", 0));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem3->setText(0, QApplication::translate("MainWindow", "Xmen", 0));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem1->child(2);
        ___qtreewidgetitem4->setText(0, QApplication::translate("MainWindow", "Head & Shoulder", 0));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem1->child(3);
        ___qtreewidgetitem5->setText(0, QApplication::translate("MainWindow", "Romano", 0));
        QTreeWidgetItem *___qtreewidgetitem6 = danhmuctreeWidget->topLevelItem(1);
        ___qtreewidgetitem6->setText(0, QApplication::translate("MainWindow", "Kem \304\221\303\241nh r\304\203ng", 0));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem6->child(0);
        ___qtreewidgetitem7->setText(0, QApplication::translate("MainWindow", "PS", 0));
        QTreeWidgetItem *___qtreewidgetitem8 = ___qtreewidgetitem6->child(1);
        ___qtreewidgetitem8->setText(0, QApplication::translate("MainWindow", "Congate", 0));
        QTreeWidgetItem *___qtreewidgetitem9 = danhmuctreeWidget->topLevelItem(2);
        ___qtreewidgetitem9->setText(0, QApplication::translate("MainWindow", "Qu\341\272\247n \303\241o", 0));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem9->child(0);
        ___qtreewidgetitem10->setText(0, QApplication::translate("MainWindow", "Vi\341\273\207t ti\341\272\277n", 0));
        QTreeWidgetItem *___qtreewidgetitem11 = ___qtreewidgetitem9->child(1);
        ___qtreewidgetitem11->setText(0, QApplication::translate("MainWindow", "Vi\341\273\207t Ph\303\241p", 0));
        QTreeWidgetItem *___qtreewidgetitem12 = ___qtreewidgetitem9->child(2);
        ___qtreewidgetitem12->setText(0, QApplication::translate("MainWindow", "Lacos", 0));
        QTreeWidgetItem *___qtreewidgetitem13 = danhmuctreeWidget->topLevelItem(3);
        ___qtreewidgetitem13->setText(0, QApplication::translate("MainWindow", "Gi\303\240y d\303\251p", 0));
        QTreeWidgetItem *___qtreewidgetitem14 = ___qtreewidgetitem13->child(0);
        ___qtreewidgetitem14->setText(0, QApplication::translate("MainWindow", "Nike", 0));
        QTreeWidgetItem *___qtreewidgetitem15 = ___qtreewidgetitem13->child(1);
        ___qtreewidgetitem15->setText(0, QApplication::translate("MainWindow", "Th\306\260\341\273\243ng \304\221\303\254nh", 0));
        QTreeWidgetItem *___qtreewidgetitem16 = ___qtreewidgetitem13->child(2);
        ___qtreewidgetitem16->setText(0, QApplication::translate("MainWindow", "Adidas", 0));
        QTreeWidgetItem *___qtreewidgetitem17 = danhmuctreeWidget->topLevelItem(4);
        ___qtreewidgetitem17->setText(0, QApplication::translate("MainWindow", "Tr\303\241i c\303\242y", 0));
        QTreeWidgetItem *___qtreewidgetitem18 = ___qtreewidgetitem17->child(0);
        ___qtreewidgetitem18->setText(0, QApplication::translate("MainWindow", "S\341\272\247u ri\303\252ng", 0));
        QTreeWidgetItem *___qtreewidgetitem19 = ___qtreewidgetitem17->child(1);
        ___qtreewidgetitem19->setText(0, QApplication::translate("MainWindow", "M\304\203ng c\341\273\245c", 0));
        QTreeWidgetItem *___qtreewidgetitem20 = ___qtreewidgetitem17->child(2);
        ___qtreewidgetitem20->setText(0, QApplication::translate("MainWindow", "X\303\262ai", 0));
        QTreeWidgetItem *___qtreewidgetitem21 = ___qtreewidgetitem17->child(3);
        ___qtreewidgetitem21->setText(0, QApplication::translate("MainWindow", "D\306\260a h\341\272\245u", 0));
        QTreeWidgetItem *___qtreewidgetitem22 = ___qtreewidgetitem17->child(4);
        ___qtreewidgetitem22->setText(0, QApplication::translate("MainWindow", "B\306\260\341\273\237i", 0));
        danhmuctreeWidget->setSortingEnabled(__sortingEnabled);

        groupBox_2->setTitle(QApplication::translate("MainWindow", "C\303\240i \304\221\341\272\267t th\303\264ng tin", 0));
#ifndef QT_NO_TOOLTIP
        vendorlineEdit->setToolTip(QApplication::translate("MainWindow", "T\303\252n H\303\243ng s\341\272\243n xu\341\272\245t", 0));
#endif // QT_NO_TOOLTIP
        vendorlineEdit->setInputMask(QString());
        vendorlineEdit->setText(QString());
#ifndef QT_NO_TOOLTIP
        brandlineEdit->setToolTip(QApplication::translate("MainWindow", "T\303\252n nh\303\243n hi\341\273\207u", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        newpricelineEdit->setToolTip(QApplication::translate("MainWindow", "Gi\303\241 b\303\241n hi\341\273\207n t\341\272\241i", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        iconBox->setToolTip(QApplication::translate("MainWindow", "Bi\341\273\203u t\306\260\341\273\243ng", 0));
#endif // QT_NO_TOOLTIP
        sendButton->setText(QApplication::translate("MainWindow", "C\341\272\255p nh\341\272\255t", 0));
#ifndef QT_NO_TOOLTIP
        oldpricelineEdit->setToolTip(QApplication::translate("MainWindow", "Gi\303\241 b\303\241n tr\306\260\341\273\233c \304\221\303\242y", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
