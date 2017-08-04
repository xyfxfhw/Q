#include "WelcomeWin.h"

WelcomeWin::WelcomeWin(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
	//setAttribute(Qt::WA_TranslucentBackground);
	//this->setWindowOpacity(0.5);//ÉèÖÃÍ¸Ã÷¶È
	showFullScreen();
}

void WelcomeWin::showCatalogWin()
{
	Catalog = new CatalogWin();
	Catalog->show();
	this->hide();
}
