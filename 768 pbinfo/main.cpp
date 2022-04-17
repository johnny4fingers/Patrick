#include <iostream>

using namespace std;

/*Se dă o matrice cu n linii şi m coloane şi elemente numere naturale. Determinați suma valorilor pare distincte din matrice.
Dacă o valoare pară apare în matrice de mai multe ori, se va aduna o singură dată.

date de intrare:
4 6
4 20 15 23 18 9
1 8 23 22 14 18
17 15 13 18 12 15
3 18 8 20 12 5

date de iesire:
98
*/


int main()
{
    int n, m, a[101][101], p[10201], k = 1, ok = 1, aux, s = 0;

    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
            if(a[i][j] % 2 == 0){
                p[k] = a[i][j];
                k++;
            }
        }
    }
    k--;

    while(ok == 1){
        ok = 0;
        for(int i = 1; i < k; i++){
            if(p[i] > p[i + 1]){
                aux = p[i];
                p[i] = p[i + 1];
                p[i + 1] = aux;
                ok = 1;
            }
        }
    }

    for(int i = 1; i <= k; i++){
        if(p[i] != p[i + 1]){
            s = p[i] + s;
        }
    }

    cout << s;

    return 0;
}
