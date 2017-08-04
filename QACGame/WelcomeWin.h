#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_WelcomeWin.h"
#include "CatalogWin.h"

class WelcomeWin : public QMainWindow
{
    Q_OBJECT

public:
    WelcomeWin(QWidget *parent = Q_NULLPTR);

private:
    Ui::WelcomeWinClass ui;
	CatalogWin *Catalog;

private slots:
	void showCatalogWin();
};
