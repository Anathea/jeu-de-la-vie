#include "GameOfLife.h"  // Inclure le fichier .h

// Constructeur
GameOfLife::GameOfLife() {}

// Initialisation du jeu
void GameOfLife::initialisation() {}

// Mise à jour du statut des cellules lors d’une itération
void GameOfLife::play() {}

// Calcule le nombre de voisins à (i,j) qui sont vivants
int GameOfLife::nbAlivedNeighbours(int i, int j) { return 0; }

// Écrit un fichier avec la solution au format Paraview
void GameOfLife::saveSolution(std::vector<std::vector<int>> grid) {}

void GameOfLife::afficheGrid(std::vector<std::vector<int>> grid)
{
  for (std::vector<int> tabDeTab : grid)
  {
    for (int element : tabDeTab)
    {
      std::cout << element << " | ";
    }
    std::cout << std::endl;
    for (int i; i < tabDansTab.size(); ++i)
    {
      std::cout << "————";
    }
    std::cout << endl;
  }
}
