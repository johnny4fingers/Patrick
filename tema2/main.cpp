#include <iostream>

using namespace std;
/*
Se dau nr naturale nenule p,q si p,q<10 si elementele intregi ale martricei a avand p lini si q coloane.
Afisati val min de pe fiecare coloana a matricei.
*/

int main()
{
    int p, q, a[10][10], minim;

    cin >> p >> q;

    for(int i = 1; i <= p; i ++) {
        for(int j = 1; j <= q; j++) {
            cin >> a[i][j];
        }
    }

    for(int j = 1; j <= q; j++) {
        for(int i = 1; i <= p; i++) {
            if(minim > a[i][j]) {
                minim = a[i][j];
            }
        }
    }

    cout << minim << " ";

    //nu inteleg de ce imi afiseaza numai pe prima coloana

    return 0;
}
