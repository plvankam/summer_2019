#include <QCoreApplication>
#include <iostream>
#include <string>
#include "grid.h"
#include "node.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    // create grid
    Grid* grid = new Grid(4);

    return a.exec();
}

