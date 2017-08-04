#include "CatalogWin.h"

CatalogWin::CatalogWin(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	showFullScreen();
}

CatalogWin::~CatalogWin()
{
}
