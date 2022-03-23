#include <iostream>

using namespace std;

/*
#721.
Se citeste un numar natural n (n<=20). Construiti si afisati o matrice patratica cu n linii si n coloane dupa modelul de mai jos, obtinut pentru n=9.
0 0 0 0 0 0 0 0 1
0 0 0 0 0 0 0 1 2
0 0 0 0 0 0 1 2 4
0 0 0 0 0 1 2 4 8
0 0 0 0 1 2 4 8 16
0 0 0 1 2 4 8 16 32
0 0 1 2 4 8 16 32 64
0 1 2 4 8 16 32 64 128
1 2 4 8 16 32 64 128 256
*/

int main()
{

    int x = 1, n = 9;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if (j > n - 2 - i) {
                cout << x << " ";
                x = x * 2;
            } else {
                cout << 0 << " ";
            }
        }
        cout << endl;
        x = 1;
    }
    return 0;
}
