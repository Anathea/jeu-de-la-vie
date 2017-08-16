# Le jeu de la vie

## Présentation générale
Le jeu de la vie est un automate cellulaire qui se déroule sur une grille à deux dimensions. Les cases, appelées cellules, ne peuvent avoir que deux états : *vivant* ou *mort*.

Il y a quatre règles pour déterminer l'état d'une cellule. Ces règles se basent sur les huit voisins de la cellule (voisins horizontaux, verticaux et en diagonale).

### Les règles :
1. Si la cellule est morte et qu'elle possède 3 voisins vivants, elle prend vie par le principe de reproduction.
2. Si la cellule est en vie et qu'elle possède plus de trois voisins, elle meurt par le principe de surpopulation.
3. Si la cellule est en vie et possède deux ou trois voisins, elle survit jusqu'à la prochaine itération.
4. Si la cellule est en vie et possède moins de deux voisins, elle meurt par le principe de sous-population.

## Présentation technique
Ce code est écrit en C++ avec une interface graphique gérée par Qt et écrite en QML.

La partie logique du code (algorithmie) se trouve dans `cpp/Grid.h`. On y trouve les fonctions principales permettant de :
* changer l'état de la cellule (`changeStatusOfCell`) ;
* compter le nombre de voisins (`nbAlivedNeighbours`) ;
* réaliser **une** itération (`step`)...

Tout l'affichage (hors console) se trouve dans `cpp/wmanager.cpp`.

Par défaut, le programme se lance avec la configuration basique permettant de faire apparaitre un clown à la 110ème itération. Tout ceci est bien évidemment modifiable.

## Easter egg
Un easter egg se cache dans ce programme, saurez-vous le retrouver ? :wink:
