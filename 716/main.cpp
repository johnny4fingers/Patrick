#include <iostream>

using namespace std;

/*Se citesc 3 numere naturale n,a,b (n,a,b<=100). Construiti si afisati o matrice patratica cu n linii si n coloane in care pe fiecare
linie cu indice impar sunt plasati in ordine crescatoare primii n multiplii ai lui a, iar pe fiecare linie cu indice par sunt plasati in
ordine descrescatoare primii n multiplii ai lui b.
*/

int main()
{
    int n, x, y, a[100][100];

    cin >> n;

    cin >> x;

    cin >> y;

    int n2 = n;

    for(int i=1;i<=n;i++){
            n2 = n;
       for(int j=1;j<=n;j++){
           if(i % 2 == 1){
              a[i][j] = j*x;
           }
           else if(i % 2 == 0){
                a[i][j] = n2*y;
                n2--;
           }
       }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
