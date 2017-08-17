#include <iostream>
#include <vector>
#include "Grid.h"

// Constructeur
Grid::Grid(int nbLignes, int nbColumns)
{
    this->m_nbLines = 0;
    this->m_nbColumns = 0;
    this->setNewDimensions(nbLignes, nbColumns);
    this->prev = nullptr;
    this->next = nullptr;
}

Grid::Grid(const Grid &grid)
{
    this->m_nbColumns = grid.m_nbColumns;
    this->m_nbLines = grid.m_nbLines;
    this->m_grid = grid.m_grid;
}

// Clone du plateau du jeu
Grid *Grid::clone()
{
    return new Grid(*this);
}

// Redimensionne & initialise la grille
void Grid::setNewDimensions(int nbLignes, int nbColumns)
{
    this->m_grid.resize(nbLignes);

    for (std::vector<int> &ligne : this->m_grid)
    {
        size_t oldSize = this->m_nbColumns;

        ligne.resize(nbColumns);

        if (oldSize < ligne.size())
        {
            for (size_t i = oldSize; i < ligne.size(); ++i)
            {
                ligne[i] = 0;
            }
        }
    }

    this->m_nbColumns = nbColumns;
    this->m_nbLines = nbLignes;
}

// Calcule le nombre de voisins à (i,j) qui sont vivants
int Grid::nbAlivedNeighbours(int i, int j)
{
    int aliveNeighbours = 0;

    if (i > 0)
    {
        aliveNeighbours += this->m_grid[i - 1][j];

        if (j > 0)
        {
            aliveNeighbours += this->m_grid[i - 1][j - 1];
        }
        if (j < (this->m_nbColumns - 1))
        {
            aliveNeighbours += this->m_grid[i - 1][j + 1];
        }
    }

    if (i < (this->m_nbLines - 1))
    {
        aliveNeighbours += this->m_grid[i + 1][j];

        if (j > 0)
        {
            aliveNeighbours += this->m_grid[i + 1][j - 1];
        }
        if (j < (this->m_nbColumns - 1))
        {
            aliveNeighbours += this->m_grid[i + 1][j + 1];
        }
    }

    if (j > 0)
    {
        aliveNeighbours += this->m_grid[i][j - 1];
    }

    if (j < (this->m_nbColumns - 1))
    {
        aliveNeighbours += this->m_grid[i][j + 1];
    }

    return aliveNeighbours;
}

// Toggle vivant ou mort
void Grid::changeStatusOfCell(int i, int j)
{
    this->m_grid[i][j] = !this->m_grid[i][j];
}

grille Grid::getGrid()
{
    return m_grid;
}

// Mise à jour du statut des cellules lors d’une itération
Grid *Grid::step()
{
    if (this->next)
    {
        return this->next;
    }

    Grid *newGrid = this->clone();

    for (size_t i = 0; i < this->m_nbLines; ++i)
    {
        for (size_t j = 0; j < this->m_nbColumns; ++j)
        {
            int neighbours = this->nbAlivedNeighbours(i, j);

            if ((this->m_grid[i][j] == 0 && neighbours == 3)
                    || (this->m_grid[i][j] != 0 && (neighbours < 2 || neighbours > 3)))
            {
                newGrid->changeStatusOfCell(i, j);
            }
        }
    }

    newGrid->prev = this;
    newGrid->next = nullptr;
    this->next = newGrid;

    return newGrid;
}

Grid *Grid::prevStep()
{
    if (!this->prev)
    {
        return this;
    }

    return this->prev;
}

Grid *Grid::reset()
{
    Grid *newResetGrid = new Grid(this->m_nbLines, this->m_nbColumns);

    newResetGrid->prev = this;
    newResetGrid->next = nullptr;
    this->next = newResetGrid;

    return newResetGrid;
}

void Grid::afficheGrid() const
{
//    std::cout << "-";
//
//    for (int i = 0; i < this->m_nbColumns; ++i)
//    {
//        std::cout << "----";
//    }
//
//    std::cout << std::endl;

    for (std::vector<int> tabDeTab : this->m_grid)
    {
//        std::cout << "|";

        for (bool element : tabDeTab)
        {

            std::cout << " ";
            (element) ? std::cout << "*" : std::cout << " ";
//            std::cout << " |";
        }

        std::cout << std::endl;
//        std::cout << "-";
//
//        for (size_t i = 0; i < tabDeTab.size(); ++i)
//        {
//            std::cout << "----";
//        }

        std::cout << std::endl;
    }
}


//void Grid::load(std::vector<std::vector<int>> grid) {}
