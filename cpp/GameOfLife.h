#ifndef GAMEOFLIFE_H
#define GAMEOFLIFE_H

// Les includes dont vous avez besoin dans le fichier .h. Attention à ne pas
// mettre de using namespace dans le .h car c’est ce fichier qui va être inclu
// et il peut donc contaminer le reste du code ...
#include <vector>
#include <iostream>

class GameOfLife //Définition de votre classe
{

public: //Méthodes et opérateurs de la classe
    //Constructeur qui permet de construire un objet de la classe. Il peut y
    //avoir différents constructeurs (comme nous verrons dans la suite)
    //Il doit porter le même nom que la classe !
    GameOfLife(int numLines, int numCols);

    void initialisation(); //Initialisation du jeu
    void play(); //Mise à jour du statut des cellules lors d’une itération
    int nbAlivedNeighbours(int i, int j); //Nombre de voisins vivants pour (i,j)
    void saveSolution(int it); //Écrit un fichier solution au format Paraview

private: //Les attributs de la classe
    int _numLines; //Nombre de lignes de la grille
    int _numCols; //Nombre de colonnes de la grille
    //La grille qui contient le statut des cellules 1 si cellule vivante,
    //0 si elle est morte. Elle est définie comme un vecteur de vecteur de int
    std::vector<std::vector<int> > _grid;

//public:
//    GameLife();
//
//    void initialisation();
//    void load(std::verctor<std::vector<int>> grid);
//    std::vector<std::vector<int>> grid() const ;
//    // On utilisera : std::vector<std::vector<int>> neighbours;
//    // pour les 8 déplacements {{-1, -1}, {-1,0}, etc...
//    void nbAlivedNeighbours(int i, int j);
//    void changeStatusOfCell(int i, int j);
//
//    void play();
//    void reversePlay();
//
//    void setNewDimensions(int nbLignes, int nbColumns);
//
//private:
//    int m_nbLines;
//    int m_nbColumns;
//    std::vector<std::vector<int>> m_grid;
//    std::vector<std::vector<int>> m_history; // for reversePlay

};

#endif // GAMEOFLIFE_H
