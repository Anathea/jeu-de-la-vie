#include <QApplication>
#include <QDebug>
#include <iostream>

#include "cpp/wmanager.h"
#include "cpp/GameOfLife.h"

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

    game.setNewDimensions(3, 3);
    game.afficheGrid();

    std::cout << std::endl;

    game.changeStatusOfCell(0, 1);
    game.changeStatusOfCell(1, 0);
    game.changeStatusOfCell(2, 1);
    game.afficheGrid();

    game.step();
    game.afficheGrid();

//    return a.exec();
    return 0;
}
