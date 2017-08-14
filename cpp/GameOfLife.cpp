#include "GameOfLife.h"  // Inclure le fichier .h
#include <iostream>

// Constructeur
GameOfLife::GameOfLife(int nbLignes, int nbColumns)
{
    this->setNewDimensions(nbLignes, nbColumns);
}

// Mise à jour du statut des cellules lors d’une itération
void GameOfLife::step()
{
    GameOfLife oldGame = this->clone();

    for (size_t i = 0; i < this->m_grid.size(); ++i)
    {
        for (size_t j = 0; j < this->m_grid[i].size(); ++j)
        {
            int neighbours = oldGame.nbAlivedNeighbours(i, j);

            if ((oldGame.m_grid[i][j] == 0 && neighbours == 3)
                    || oldGame.m_grid[i][j] != 0 && (neighbours < 2 || neighbours > 3))
            {
                this->changeStatusOfCell(i, j);
            }
        }
    }

    oldGame.next = this;
    this->prev = &oldGame;
    this->next = NULL;
}



void GameOfLife::previousPlay()
{

}

void setNewDimensions(int nbLignes, int nbColumns);


//private :
//// On utilisera dans cette fonction une variable :
//std::vector<std::vector<int>> neighbours;
//// pour les 8 déplacements une variable {{-1, -1}, {-1,0}, etc....
//int nbAlivedNeighbours(int i, int j);

//int m_nbLines;
//int m_nbColumns;

//std::vector<std::vector<int>> m_grid;

//// une fois le typedef utilisé.
//std::vector<grille> m_history; // for reversePlay
