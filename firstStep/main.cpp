#include <iostream>
#include <string>
#include <cmath>
#include "draw.h"
using namespace std;
double addition(double nb1, double nb2){
    return nb1 + nb2;
}

string demanderNom()
{
     cout << "Entrez votre nom : ";
     string nom;
     cin >> nom;
     return nom;
}

string direBonjour(string name){
    cout << "Bonjour " << name << endl;
}



int main()
{
    int largeur,hauteur;
    string motif("*");
    cout << "Largeur ? ";
    cin >> largeur;
    cout << "Hauteur ? ";
    cin >> hauteur;
    cout << "Quel symbole voulez vous pour le dessin ? ";
    cin >> motif;
    if(largeur < 1){
        cout << "Veuillez saisir une largeur positive !" << endl;
    } else{
        if(hauteur < 1){
            cout << "Veuillez saisir une hauteur positive !" << endl;
        }
        else{
            dessineRectangle(largeur,hauteur,motif);
        }
    }




    /*double res(0);

    res = addition(1,6);
    cout << res << endl;

    string nomEntrer("");
    nomEntrer = demanderNom();
    direBonjour(nomEntrer);*/


    //cout << nomEntrer << endl;

    /*int compteur(0);
    for (compteur = 0 ; compteur < 10 ; compteur++)
    {
        cout << compteur << endl;
    }*/

    /*int nbEnfants(2);

    switch (nbEnfants){
        case 0:
            cout << "0 oh" << endl;
            break;
        case 1:
            cout << "1 whoa" << endl;
            break;
        case 2:
            cout << "2 top top" << endl;
            break;
        default:
            cout << "Bon stop" << endl;
            break;
    }

    bool isAdmin(false);

    if(!isAdmin){
        cout << "Admin pas ok" << endl;
    } else{
        cout << "Admin ok" << endl;
    }*/


    /*double const nombre(16); //Le nombre dont on veut la racine
                             //Comme sa valeur ne changera pas on met 'const'
    double resultat;         //Une case mémoire pour stocker le résultat

    resultat = sqrt(nombre);  //On effectue le calcul !

    cout << "La racine de " << nombre << " est " << resultat << endl;*/


    /*int const nbLevel(10);
    int ageUser(0);
    string nomUser("noname");


    cout << "Quel age ?" << endl;
    cin >> ageUser;

    cin.ignore();

    cout << "Quel nom ?" << endl;
    // cin >> nomUser;  // Ne gere pas les espaces
    getline(cin, nomUser);

    cout << "Salut " << nomUser << ". Vous avez donc " << ageUser << " ans !" << endl;

    double nb1(0);
    double nb2(0);
    double nb3(0);
    double res(0);

    cout << "Veuillez saisir un 1er nombre" << endl;
    cin >> nb1;
    cout << "Veuillez saisir un 2eme nombre" << endl;
    cin >> nb2;
    cout << "Veuillez saisir un 3eme nombre" << endl;
    cin >> nb3;

    res = nb1 + nb2 * nb3;

    cout << nb1 << " + " << nb2 << " * " << nb3 << " = " << res;*/



    /*int ageUser(26);
    char nomUser('Alex');
    char nomPlayer; // var non initialisée
    bool isAdmin(false);
    bool isLogged(false);
    string nomUtilisateur("jdlskjf");
    int& ageUtilisateur(ageUser);
    ageUtilisateur++;
    cout << "Hello world!" << endl << "truc \" \\ eee " << endl;
    cout << "Salut " << nomUtilisateur << ". " << ageUser << " ans, et beh..." << endl;*/
    return 0;
}
