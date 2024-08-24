#include "mainwindow.h"

#include <QApplication>
#include <QStringList>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QStringList tableHeaders = {"Datum", "Crypto", "Payment", "Fee", "Invested"};

    w.setTableHeaders(tableHeaders);

    w.show();
    return a.exec();
}
