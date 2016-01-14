#include <iostream>

using namespace std;

// Prototype de la fonction
int nombreDeSecondes(int minutes, int secondes, int heures = 0);

// Main
int main()
{
    cout << nombreDeSecondes(0,1,30) << endl;

    return 0;
}

// Définition de la fonction
int nombreDeSecondes(int heures, int minutes, int secondes)
{
    int total = 0;

    total = heures * 60 * 60;
    total += minutes * 60;
    total += secondes;

    return total;
}
