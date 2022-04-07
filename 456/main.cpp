#include <iostream>

using namespace std;

/*

#456.
Se citeste o matrice cu n linii si m coloane avand elementele 0 sau 1. Afisati perechile de linii complementare (suma elementelor de pe cele doua linii si de pe aceleasi coloane sa fie 1).
Exemplu:
n=5 m=3
matricea
1 0 1
1 1 1
0 1 0
0 0 0
1 1 0
are perechile de linii complementare (1,3) si (2,4)
Liniile 1 si 3 sunt complementare deoarece
1 0 1 +
0 1 0
_____
1 1 1
*/

int main()
{
    int n = 5, m = 3, a[10][10] = {{1, 0, 1}, {1, 1, 1}, {0, 1, 0}, {0, 0, 0}, {1, 1, 0}};

    /*
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    */



    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){

            bool flag = true;
            for(int k = 0; k < m; k++){
                if(a[i][k] + a[j][k] != 1){
                    flag = false;
                }
            }

            if(flag){
                cout << "(" << i + 1 << "," << j + 1 << ")" << endl;
             }
        }
    }

    return 0;
}
