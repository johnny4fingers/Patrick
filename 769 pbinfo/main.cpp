#include <iostream>

using namespace std;

/*#769 pbinfo
Se dă o matrice cu n linii şi m coloane şi elemente numere naturale. Să se ordoneze coloanele matricei astfel încât elementele de pe prima linie să fie ordonate crescător.
*/

int main()
{
    int n, m, a[101][101], ok = 1, aux;

    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }

    while(ok == 1){
        ok = 0;
        for(int j = 1; j < m; j++){
            if(a[1][j] > a[1][j+1]){
                for(int i = 1; i <= n; i++){
                    aux = a[i][j];
                    a[i][j] = a[i][j+1];
                    a[i][j+1] = aux;
                    ok = 1;
                }
            }
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    //am primit ajutor la aceasta problema.


    return 0;
}
