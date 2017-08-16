#ifndef GRID_H
#define GRID_H

typedef std::vector<std::vector<int>> grille;


class Grid
{
public:
    Grid(int nbLignes, int nbColumns);
    Grid(const Grid &grid);

    Grid *clone();

    void setNewDimensions(int nbLignes, int nbColumns);
    void afficheGrid() const; // afficher une grille en console
    void changeStatusOfCell(int i, int j);

    Grid *step();
    Grid *prevStep();

    Grid *reset();

    grille getGrid();

private:
    Grid *prev;
    Grid *next;

    grille m_grid;

    int m_nbLines;
    int m_nbColumns;

    // pour les 8 déplacements une variable {{-1, -1}, {-1,0}, etc....
    int nbAlivedNeighbours(int i, int j);
};

#endif // GRID_H
