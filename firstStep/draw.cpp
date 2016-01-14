#include "draw.h"
#include <iostream>
using namespace std;
void dessineRectangle(int l, int h, string motif)
{
    for(int ligne(0); ligne < h; ligne++)
    {
        for(int colonne(0); colonne < l; colonne++)
        {
            cout << motif;
        }
        cout << endl;
    }
}
