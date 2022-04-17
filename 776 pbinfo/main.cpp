#include <iostream>

using namespace std;

/*Se dă o matrice cu n linii şi m coloane şi elemente numere naturale. Să se determine câte linii ale matricei au toate elementele egale.

date de intrare:
4 6
23 23 15 23 18 23
17 17 17 17 17 17
17 18 13 18 12 15
34 34 34 34 34 34

date dde iesire:
2
*/

int main()
{
    int n, m, a[101][101], ok = 0, r = 0;

    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 1; i <= n; i++){
        ok = 0;
        for(int j = 1; j <= m; j++){
            if(a[i][1] == a[i][j]){
                ok++;
            }
        }
        if(ok == m){
            r++;
        }
    }

    cout << r;

    return 0;
}
