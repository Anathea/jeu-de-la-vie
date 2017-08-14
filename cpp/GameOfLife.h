#ifndef GAMELIFE_H
#define GAMELIFE_H
#include <vector>
#include "Grid.h"

class GameOfLife {

public :
    GameOfLife(int nbLignes = 10, int nbColumns = 10);

    void load(grille grid);

    Grid grid() const;

    void step();
    void previousPlay();

//    void saveSolution(grille grid);

private :
    Grid *m_grid;
};

#endif // GAMELIFE_H
