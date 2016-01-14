#include <iostream>

using namespace std;

int main()
{
    int ageUser(25);
    cout << "L'adresse est : " << &ageUser << endl;

    //Déclarer un pointeur qui contient l'adresse d'un entier
    int *pointeur(0);

    //Déclare un pointeur qui contien l'adresse d'un string
    string *pointeurB(0);

    pointeur = &ageUser;
    cout << "La valeur de pointeur est : " << pointeur << endl;
    cout << "Pointeur pointe sur la valeur : " << *pointeur << endl;

    return 0;
}
