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
// declarate aici ca sa avem vizibilitate in toate functiile nu doar in main
int arr[101][101], m;

// functie care efectueaza interschimbarea intre doua linii
void interschimbare(int i, int j) {
    for (int k = 0; k < m; k++) {
        int aux = arr[i][k];
        arr[i][k] = arr[j][k];
        arr[j][k] = aux;
    }
}

// functie care primeste parametru indexul liniei "i" si returneaza suma elementelor liniei
int suma(int i) {
    int sumaLiniei = 0;
    for (int j = 0; j < m; j++) {
        sumaLiniei = sumaLiniei + arr[i][j];
    }

    return sumaLiniei;
}

int main()
{
    // int n, m, a[101][101], i, j, ok=0, aux, k, q, b, r;
    int n;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    // bubble-sort pentru linii
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if(suma(i) > suma(j)) {
                // interschimbam linia i cu linia j
                interschimbare(i, j);
            }
        }
    }

    /*
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
    }*/


    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
