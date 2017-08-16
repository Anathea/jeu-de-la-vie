#include <QApplication>
#include <QDebug>
#include <iostream>

#include "cpp/wmanager.h"
#include "cpp/GameOfLife.h"
#include "cpp/Grid.h"

WManager                            *WManager::_singleton                   = NULL;

int main(int argc, char *argv[])
{
//    QApplication a(argc, argv);
//    WManager::getInstance()->load();

//    std::vector<std::vector<int>> saveGrid;

//    int iterationNb = 110; // nombre d’itérations que l’on va faire
//    GameOfLife game; // définition d’un objet "game" de taille 50x50
//    game.initialisation(); // on initialise (ex : figure ci-dessus)
//    game.saveSolution(saveGrid); // on sauvegarde l’initialisation

//    for(int i=1; i<=iterationNb; i++) // boucle sur les itérations
//    {
//        game.play(); // on joue (mise à jour du statut des cellules
//        game.saveSolution(saveGrid); // on sauvegarde les solutions obtenues
//    }

//    qDebug() << "avant return a.exec dans le main.";

    GameOfLife game;

    game.grid().setNewDimensions(40, 40);

    game.grid().changeStatusOfCell(16, 16);
    game.grid().changeStatusOfCell(16, 17);
    game.grid().changeStatusOfCell(16, 18);
    game.grid().changeStatusOfCell(17, 16);
    game.grid().changeStatusOfCell(17, 18);
    game.grid().changeStatusOfCell(18, 16);
    game.grid().changeStatusOfCell(18, 18);

    game.afficheGrid();






    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();
    game.step();

    game.afficheGrid();

//    return a.exec();
    return 0;
}
