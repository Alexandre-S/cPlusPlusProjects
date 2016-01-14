#include <iostream>
#include <string>
#include <vector> //Ne pas oublier !

using namespace std;

double moyenne(double tableau[], int tailleTab){
    double moyenne(0);
    for(int i(0); i<tailleTab; i++){
        moyenne += tableau[i];
    }

    moyenne /= tailleTab;
    return moyenne;
}

double moyenneVec(vector<double> const& tab, int taille){
    double res(0);
    for(int i(0); i<taille; i++){
        res += tab[i];
    }

    res /= taille;
    return res;
}

int main()
{
    int const nbScore(5);
    int bestScore[nbScore];
    double angleTriangle[3];

    bestScore[0] = 118218;  //Remplissage de la première case
    bestScore[1] = 100432;  //Remplissage de la deuxième case
    bestScore[2] = 87347;   //Remplissage de la troisième case
    bestScore[3] = 64523;   //Remplissage de la quatrième case
    bestScore[4] = 31415;   //Remplissage de la cinquième case

    for(int i(0); i<nbScore; ++i)
    {
        cout << bestScore[i] << endl;
    }

    int const nbNotes(6);
    double notes[nbNotes];

    notes[0] = 12.5;
    notes[1] = 19.5;  //Bieeeen !
    notes[2] = 6.;    //Pas bien !
    notes[3] = 12;
    notes[4] = 14.5;
    notes[5] = 15;

    double moy(0);

    moy = moyenne(notes,nbNotes);
    /*for(int i(0); i<nbNotes; i++){
        moyenne += notes[i];
    }

    moyenne /= nbNotes;*/

    cout << "La moyenne est de : " << moy << endl;


    vector<int> tableau(5,3);
    vector<string> listeNoms(12, "Sans nom");

    int const nombreMeilleursScores(5);  //La taille du tableau

    vector<int> meilleursScores(nombreMeilleursScores);  //Déclaration du tableau

    int const taille(meilleursScores.size());

    meilleursScores[0] = 118218;  //Remplissage de la première case
    meilleursScores[1] = 100432;  //Remplissage de la deuxième case
    meilleursScores[2] = 87347;   //Remplissage de la troisième case
    meilleursScores[3] = 64523;   //Remplissage de la quatrième case
    meilleursScores[4] = 31415;   //Remplissage de la cinquième case
    meilleursScores.push_back(27541);
    meilleursScores.pop_back();
    meilleursScores.push_back(17541);

    vector<double> notesTab; //Un tableau vide

    notesTab.push_back(12.5);  //On ajoute des cases avec les notes
    notesTab.push_back(19.5);
    notesTab.push_back(6);
    notesTab.push_back(12);
    notesTab.push_back(14.5);
    notesTab.push_back(15);

    moy = moyenneVec(notesTab,notesTab.size());

    cout << "La moyenne est de : " << moy << endl;


    int const tailleX(5);
    int const tailleY(4);
    int tableauMulti[tailleX][tailleY];

    string texte("Portez ce whisky au vieux juge blond qui fume.");  //46 caractères
    cout << "Cette phrase contient " << texte.size() << " lettres." << endl;

    return 0;
}
