#include <QString>
#include <QtWidgets>

#include "headers/QConWidgets/QGameMainWindow.h"

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    QGameMainWindow *mainWindow = new QGameMainWindow();
    mainWindow->show();

    return a.exec();
}
