#include "WelcomeWin.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WelcomeWin w;
    w.show();
    return a.exec();
}
