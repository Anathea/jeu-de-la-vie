#include <QApplication>
#include <QDebug>
#include <iostream>

#include "cpp/wmanager.h"
#include "cpp/GameOfLife.h"
#include "cpp/Grid.h"

WManager                            *WManager::_singleton                   = NULL;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WManager::getInstance()->load();

    int iterationNb = 110;

    GameOfLife game;

    game.grid().setNewDimensions(41, 41);

    game.grid().changeStatusOfCell(19, 19);
    game.grid().changeStatusOfCell(19, 20);
    game.grid().changeStatusOfCell(19, 21);
    game.grid().changeStatusOfCell(20, 19);
    game.grid().changeStatusOfCell(20, 21);
    game.grid().changeStatusOfCell(21, 19);
    game.grid().changeStatusOfCell(21, 21);

    game.afficheGrid();

    for (int i = 0; i < iterationNb; ++i)
    {
        game.step();
    }

    game.afficheGrid();

    qDebug() << "avant return a.exec dans le main.";
    return a.exec();
//    return 0;
}
