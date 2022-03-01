#include <iostream>

using namespace std;

/*
Se dau nr naturale nenule p,q si p,q<10 si elementele intregi ale martricei a avand p lini si q coloane.
Afisati suma elementelor de pe conturul matricei.
*/

int main()
{
    int p, q, a[10][10], s = 0;

    cin >> p >> q;

    for(int i = 1; i <= p; i++) {
        for(int j = 1; j <= q; j++) {
            cin >> a[i][j];
        }
    }

    for(int i = 1; i <= p; i++) {
        for(int j = 1; j <= q; j++) {
            if(i == 1){
                s = s + a[i][j];
            }
            if(i == q) {
                s = s + a[i][j];
            }
            if(i != 1 && i != q && j == 1) {
                s = s + a[i][j];
            }
            if(i != 1 && i != q && j == q) {
                s = s + a[i][j];
            }
        }
    }
    cout << s;

    return 0;
}
