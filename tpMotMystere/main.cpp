#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

string melangerLettre(string mot){
    string res("");
    int position(0);
    while(mot.size() > 0){
        position = rand() % mot.size();
        res += mot[position];
        mot.erase(position, 1);
    }
    return res;
}

int main()
{
    srand(time(0));
    bool jouer(true);
    do{
        cout << "Saisissez un mot ! : " ;
        string motMystere;
        cin >> motMystere;
        int nbVie(5);

        string motMelanger;

        motMelanger = melangerLettre(motMystere);

        string motSaisi("");
        do{
            if(nbVie == 1){
                cout << endl << "Attention, dernier essai !" << endl;
            }
            cout << "Quel est ce mot ? " << motMelanger << endl;
            cin >> motSaisi;
            if(motSaisi != motMystere){
                nbVie--;
                cout << "Ce n'est pas le mot, il vous reste " << nbVie << " chance" << endl;
            } else{
                cout << "Bravo vous avez trouve le mot !!" << endl << endl;
            }
        }while((motSaisi != motMystere) && (nbVie > 0));


        cout << "Voulez vous rejouer ? Y/N ";
        string rejouer;
        cin >> rejouer;
        if(rejouer != "Y"){
            jouer = false;
        }
    }while (jouer);

    return 0;
}


