#include "GameOfLife.h"  // Inclure le fichier .h
#include "Grid.h"
#include <iostream>

// Constructeur
GameOfLife::GameOfLife(int nbLignes, int nbColumns)
{
    this->m_grid = new Grid(nbLignes, nbColumns);
}

// Mise à jour du statut des cellules lors d’une itération
void GameOfLife::step()
{
    this->m_grid = this->m_grid->step();
}

void GameOfLife::prevStep()
{
    this->m_grid = this->m_grid->prevStep();
}


Grid& GameOfLife::grid()
{
    return *this->m_grid;
}

void GameOfLife::afficheGrid() const
{
    this->m_grid->afficheGrid();
}
