#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream fichier("C:/NoSaved/PERSONNEL/sdf.txt");  //On ouvre le fichier
    fichier.seekg(0, ios::end);  //On se déplace à la fin du fichier

    int taille;
    taille = fichier.tellg();
    //On récupère la position qui correspond donc a la taille du fichier !

    cout << "Taille du fichier : " << taille << " octets." << endl;

    /*ifstream monFlux("C:/NoSaved/PERSONNEL/sdf.txt");

    if(monFlux)
    {
        //Tout est prêt pour la lecture.
        //Ligne par ligne :
        //string ligne;
        //getline(monFlux, ligne);
        //cout << ligne << endl;
        string ligne;
        while(getline(monFlux, ligne)){
            cout << ligne << endl;
        }
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
    }*/

    /*string const nomFichier("C:/NoSaved/PERSONNEL/sdf.txt");
    //ofstream monFlux(nomFichier.c_str()); // Créer et écrase si existant
    ofstream monFlux(nomFichier.c_str(), ios::app); // Créer et rajoute si existant

    if(monFlux)
    {
        monFlux << "Bonjour, je suis une phrase écrite dans un fichier." << endl;
        monFlux << 42.1337 << endl;
        int age(23);
        monFlux << "J'ai " << age << " ans." << endl;
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
    }
    //Si besoin de refermer le fichier plus tot :
    monFlux.close();*/
    return 0;
}
