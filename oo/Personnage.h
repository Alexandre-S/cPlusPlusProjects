#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED

#include <iostream>
#include <string>
#include "Arme.h"

class Personnage
{
    public:

    Personnage(); // Constructeur
    Personnage(std::string nomArme, int degatsArme); //Constructeur surchargé
    ~Personnage(); //Destructeur
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant() const;
    void afficherEtat() const;

    private:

    int m_vie;
    int m_mana;
    Arme m_arme;
};

#endif // PERSONNAGE_H_INCLUDED
