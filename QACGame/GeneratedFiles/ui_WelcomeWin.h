/********************************************************************************
** Form generated from reading UI file 'WelcomeWin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWIN_H
#define UI_WELCOMEWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WelcomeWinClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *WelcomeWinClass)
    {
        if (WelcomeWinClass->objectName().isEmpty())
            WelcomeWinClass->setObjectName(QStringLiteral("WelcomeWinClass"));
        WelcomeWinClass->resize(1210, 852);
        centralWidget = new QWidget(WelcomeWinClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 192, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_9);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(400, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(20);
        pushButton->setFont(font1);

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(400, 0));
        pushButton_2->setFont(font1);

        horizontalLayout_2->addWidget(pushButton_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_8);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(400, 0));
        pushButton_3->setFont(font1);

        horizontalLayout_3->addWidget(pushButton_3);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 191, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(12);
        label->setFont(font2);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label);

        WelcomeWinClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(WelcomeWinClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        WelcomeWinClass->setStatusBar(statusBar);

        retranslateUi(WelcomeWinClass);
        QObject::connect(pushButton_3, SIGNAL(clicked()), WelcomeWinClass, SLOT(close()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), WelcomeWinClass, SLOT(showCatalogWin()));

        QMetaObject::connectSlotsByName(WelcomeWinClass);
    } // setupUi

    void retranslateUi(QMainWindow *WelcomeWinClass)
    {
        WelcomeWinClass->setWindowTitle(QApplication::translate("WelcomeWinClass", "WelcomeWin", Q_NULLPTR));
        label_2->setText(QApplication::translate("WelcomeWinClass", "\347\244\276\345\233\242\350\277\220\350\220\245\346\236\266\346\236\204\350\265\267\350\215\211&\346\270\270\346\210\217\350\256\276\350\256\241\351\241\271\347\233\256\347\255\226\345\210\222\n"
"\345\220\257\345\212\250\345\244\247\344\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("WelcomeWinClass", "\345\274\200\345\247\213", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("WelcomeWinClass", "\347\253\240\350\212\202\347\233\256\345\275\225", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("WelcomeWinClass", "\351\200\200\345\207\272", Q_NULLPTR));
        label->setText(QApplication::translate("WelcomeWinClass", "\351\230\277\345\220\271\345\250\261\344\271\220\345\207\272\345\223\201       ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WelcomeWinClass: public Ui_WelcomeWinClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWIN_H
