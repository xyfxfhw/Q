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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CatalogWin
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *CatalogWin)
    {
        if (CatalogWin->objectName().isEmpty())
            CatalogWin->setObjectName(QStringLiteral("CatalogWin"));
        CatalogWin->resize(1058, 796);
        pushButton = new QPushButton(CatalogWin);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(730, 660, 93, 28));

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
