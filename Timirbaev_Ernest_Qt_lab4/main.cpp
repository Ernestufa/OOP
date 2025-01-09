#include "timirbaev_ernest_mainwindow.h"
#include <Windows.h>
#include "Timirbaev_Utils.h"
#include "timirbaev_warehouse.h"
#include <time.h>

using namespace std;

#include <QApplication>

int main(int argc, char *argv[])
{
    Timirbaev_Warehouse products;
    QApplication a(argc, argv);
    Timirbaev_Ernest_MainWindow w;
    w.show();
    return a.exec();
}
