#ifndef GAMELIFE_H
#define GAMELIFE_H
#include <vector>
#include "Grid.h"

class GameOfLife {

public :
    GameOfLife(int nbLignes = 10, int nbColumns = 10);

    void load(grille grid);

    Grid& grid();

    void step();
    void prevStep();

    void afficheGrid() const; // afficher une grille en console

//    void saveSolution(grille grid);

private :
    Grid *m_grid;
};

#endif // GAMELIFE_H
