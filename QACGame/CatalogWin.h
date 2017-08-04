#pragma once

#include <QWidget>
#include "ui_CatalogWin.h"

class CatalogWin : public QWidget
{
	Q_OBJECT

public:
	CatalogWin(QWidget *parent = Q_NULLPTR);
	~CatalogWin();

private:
	Ui::CatalogWin ui;
};
