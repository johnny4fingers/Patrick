#include <iostream>

using namespace std;

int main()
{
    int a[10][10] = {{1, 1, 1, 0}, {1, 0, 1, 0}, {1, 1, 0, 1}, {0, 0, 0, 1}};

    int n = 4;

    int c = 0;
    bool ramaOut = true;

    for(int i = 0; i < (n + 1) / 2; i++){
        //limita sus
        for(int p = 0 + i; p < n - i; p++) {
            //cout << a[i][p] << " ";
            if(a[i][p] == 0){
                if(ramaOut == false) {
                    c++;
                    cout << i + 1 << "," << p + 1 << endl;
                    ramaOut =  true;
                } else {
                    ramaOut = false;
                }
            }
        }

        //limita dreapta
        for(int q = 1 + i; q < n - i; q++){
            //cout << a[q][n - 1 - i] << " ";
            if(a[q][n - 1 - i] == 0){
                if(ramaOut == false) {
                    c++;
                    cout << q + 1 << "," << n - i << endl;
                    ramaOut =  true;
                } else {
                    ramaOut = false;
                }
            }
        }

        //limita jos
        for(int r = n - 2 - i; r >= i; r--){
            //cout << a[n - 1 - i][r] << " ";
            if(a[n - 1 - i][r] == 0){
                if(ramaOut == false) {
                    c++;
                    cout << n - i << "," << r + 1 << endl;
                    ramaOut =  true;
                } else {
                    ramaOut = false;
                }
            }
        }

        //limita stanga
        for(int s = n - 2 - i; s > i; s--){
            //cout << a[s][i] << " ";
            if(a[s][i] == 0){
                if(ramaOut == false) {
                    c++;
                    cout << s + 1 << "," << i + 1 << endl;
                    ramaOut =  true;
                } else {
                    ramaOut = false;
                }
            }
        }
    }

    cout << c << endl;


    return 0;
}
