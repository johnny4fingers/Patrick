#include <iostream>

using namespace std;

int main()
{
    int n = 3, m = 4, a[4][4] = {{1, 4, 1, 3},{4, 8, 5, 8},{3, 8, 9, 1}};
    /*
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    */

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){

            int suma = 0;
            for(int k = 0; k < m; k++) {
                suma = suma + a[i][k];
            }

            int prod = 1;
            for (int l = 0; l < n; l++) {
                prod = prod * a[l][j];
            }

            // tema
            // u = cel mai mare divizor comun

            while(suma != prod){
                if(suma > prod){
                    suma = suma - prod;
                } else {
                    prod = prod - suma;
                }
            }

            if(suma == a[i][j]){
                cout << a[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
