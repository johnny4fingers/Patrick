#include <iostream>

using namespace std;
/*
Se dau nr naturale nenule p,q si p,q<10 si elementele intregi ale martricei a avand p lini si q coloane.
Determinati nr de linii formate cu elemente de acesi paritate.
*/


int main()
{
    int p, q, a[10][10], impar, par, linii = 0;

    cin >> p >> q;

    for(int i = 1; i <= p; i++) {
        for(int j = 1; i <= q; j++) {
            cin >> a[i][j];
        }
    }

    for(int i = 1; i <= p; i++) {
        for(int j = 1; j <= q; j++){
            if(a[i][j] % 2 == 0) {
                par++;
            }
            else impar++;
        }
        if(impar == 0 || par == 0) {
            linii++;
        }
    }
    cout << linii;

    // pe acest exercitiu nu am fost foarte sigur dar nu inteleg dc nu afiseaza nimic

    return 0;
}
