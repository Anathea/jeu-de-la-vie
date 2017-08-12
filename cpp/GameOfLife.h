#ifndef GAMELIFE_H
#define GAMELIFE_H
#include <vector>

typedef std::vector<std::vector<int>> grille;

class GameOfLife {

public :
    GameOfLife();

    void initialisation();

    void load(std::vector<std::vector<int>> grid);

    std::vector<std::vector<int>> grid() const;
    void afficheGrid(std::vector<std::vector<int>>) const; // afficher une grille en console

    void changeStatusOfCell(int i, int j);

    void play();
    void reversePlay();

    void setNewDimensions(int nbLignes, int nbColumns);

    void saveSolution(grille grid);

private :
    // On utilisera dans cette fonction une variable :
    // std::vector<std::vector<int>> neighbours;
    // pour les 8 déplacements une variable {{-1, -1}, {-1,0}, etc....
    int nbAlivedNeighbours(int i, int j);

    int m_nbLines;
    int m_nbColumns;

    std::vector<std::vector<int>> m_grid;

    // une fois le typedef utilisé.
    std::vector<grille> m_history; // for reversePlay
};

#endif // GAMELIFE_H
