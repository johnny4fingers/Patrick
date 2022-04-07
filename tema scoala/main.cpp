#include <iostream>

using namespace std;

/*
Se citesc 4 caractere. Afisati in ordine lexicografica cate 1 pe o linie ecran.
*/

int main()
{
    char x, a[4], aux;

    for(int i = 0; i < 4; i++){
        cin >> a[i];
    }

    for(int i = 0; i < 3; i++){
        for(int j = i + 1; j < 4; j++){
            if(a[i] > a[j]){
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    }

    for(int i = 0; i < 4; i++){
        cout << a[i] << endl;
    }

    return 0;
}
