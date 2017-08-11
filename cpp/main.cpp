#include <QApplication>
#include <QDebug>

#include "cpp/wmanager.h"
#include "cpp/GameOfLife.h"

WManager                            *WManager::_singleton                   = NULL;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WManager::getInstance()->load();

    int iterationNb = 110; // nombre d’itérations que l’on va faire
    GameOfLife game(50, 50); // définition d’un objet "game" de taille 50x50
    game.initialisation(); // on initialise (ex : figure ci-dessus)
    game.saveSolution(0); // on sauvegarde l’initialisation

    for(int i=1; i<=iterationNb; i++) // boucle sur les itérations
    {
        game.play(); // on joue (mise à jour du statut des cellules
        game.saveSolution(i); // on sauvegarde les solutions obtenues
    }

    qDebug() << "avant return a.exec dans le main.";
    return a.exec();
}
