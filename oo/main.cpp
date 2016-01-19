#include <iostream>
#include <string>
#include "Personnage.h" //Ne pas oublier

using namespace std;

int main()
{
    Personnage david("David", "Epée en os", 10), goliath("Goliath", "Epée en pierre", 20);
    Personnage bob(goliath);

    goliath.attaquer(david);    //goliath attaque david
    david.boirePotionDeVie(20); //david récupère 20 de vie en buvant une potion
    goliath.attaquer(david);    //goliath réattaque david
    david.attaquer(goliath);    //david contre-attaque... c'est assez clair non ?

    goliath.changerArme("Double hache tranchante vénéneuse de la mort", 40);
    goliath.attaquer(david);

    cout << "David" << endl;
    david.afficherEtat();
    cout << endl << "Goliath" << endl;
    goliath.afficherEtat();


    return 0;
}

