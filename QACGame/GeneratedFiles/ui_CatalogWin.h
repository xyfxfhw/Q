/********************************************************************************
** Form generated from reading UI file 'CatalogWin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATALOGWIN_H
#define UI_CATALOGWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CatalogWin
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QWidget *CatalogWin)
    {
        if (CatalogWin->objectName().isEmpty())
            CatalogWin->setObjectName(QStringLiteral("CatalogWin"));
        CatalogWin->resize(1058, 796);
        verticalLayout = new QVBoxLayout(CatalogWin);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 734, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(CatalogWin);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(CatalogWin);
        QObject::connect(pushButton, SIGNAL(clicked()), CatalogWin, SLOT(close()));

        QMetaObject::connectSlotsByName(CatalogWin);
    } // setupUi

    void retranslateUi(QWidget *CatalogWin)
    {
        CatalogWin->setWindowTitle(QApplication::translate("CatalogWin", "CatalogWin", Q_NULLPTR));
        pushButton->setText(QApplication::translate("CatalogWin", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CatalogWin: public Ui_CatalogWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATALOGWIN_H
