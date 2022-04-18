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
    // foarte complicat
    // la citire poti verifica paritatea si distinctia

    // suma pe care o vomavea de afisat
    int suma = 0;
    // array unde salvam/verificam ce am adaugat la suma
    int arr[100];
    // counter sa stim cate elemente avem in arr[]
    int counter = 0;
    //
    int n, m;

    // int n, m, a[101][101], p[10201], k = 1, ok = 1, aux, s = 0;

    cin >> n >> m;

    // citire
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            // definim o variabila int sa putem stoca valoarea introdusa
            int nr;
            cin >> nr;
            // vedem daca ii par
            if (nr % 2 == 0) {
                // verificam daca se afla in array
                bool gasit = false;
                for(int k = 0; k < counter; k++) {
                    if (arr[k] == nr) {
                        gasit = true;
                    }
                }
                // in cazul in care nu am gasit numarul introdus in array trebuie introdus si adugat la suma
                if (gasit == false) {
                    suma = suma + nr;
                    // incrementam counterul ca sa stim cate elemente avem in array si pe ce loc punem urmatorul numar
                    counter++;
                    // adaugam pe
                    arr[counter] = nr;
                }
            }
        }
    }

    // afisare
    cout << suma;
/*
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
*/
    return 0;
}
