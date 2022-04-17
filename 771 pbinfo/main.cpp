#include <iostream>

using namespace std;

/*Se dă o matrice cu n linii şi m coloane şi elemente numere naturale. Să se ordoneze liniile matricei crescător după suma elementelor.

date de intrare:
4 6
4 20 15 23 18 9
1 8 23 22 14 18
17 15 13 18 12 15
3 18 8 20 12 5

date de iesire:
3 18 8 20 12 5
1 8 23 22 14 18
4 20 15 23 18 9
17 15 13 18 12 15
*/

int main()
{
    int n, m, a[101][101], i, j, ok=0, aux, k, q, b, r;

    cin >> n >> m;

    for(i = 1; i <= n; i++){
        for(j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }

    while(ok == 0){
        ok = 1;
        for(i = 1, j = i + 1; i < n, j <= n; i++, j++){
                q = 0;
                b = 0;
            for(k = 1; k <= m; k++){
                q = q + a[i][k];
                b = b + a[j][k];
            }
            if(q > b){
                ok = 0;
                for(r = 1; r <= m; r++){
                    aux = a[i][r];
                    a[i][r] = a[i + 1][r];
                    a[i + 1][r] = aux;
                }
            }
        }
    }


    for(i = 1; i <= n; i++){
        for(j = 1; j <= m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
