#include <iostream>

using namespace std;
/*#718.
Se citeste un numar natural n (n<=100). Construiti si afisati o matrice patratica cu n linii si n coloane dupa modelul de mai jos, obtinut pentru n=9.
5 4 3 2 1 2 3 4 5
4 5 4 3 2 3 4 5 4
3 4 5 4 3 4 5 4 3
2 3 4 5 4 5 4 3 2
1 2 3 4 5 4 3 2 1
2 3 4 5 4 5 4 3 2
3 4 5 4 3 4 5 4 3
4 5 4 3 2 3 4 5 4
5 4 3 2 1 2 3 4 5
*/
/* Aici ai harta ij a unei matrice n = 5
- in prima faza dorim sa iteram matricea pana la jumatatea lui i si pana la jumatatea lui j
am separat matricea mica pentru vizibilitate mai buna

00 01 02   03 04
10 11 12   13 14
20 21 22   23 24

30 31 32   33 34
40 41 42   43 44

- numerele din matricea mica vor arata asa
3 2 1
2 3 2
1 2 3
- diagonala principala, i == j
pe diagonala setam (n + 1)/2
in cazul nostru n = 5 va fi (5 + 1)/2 = 3
3
  3
    3
- numere care se afla deasupra diagonalei principale, i < j
aici e simplu, mai mic cu 1 decat cel din stanga lui
3 2 1
  3 2
    3
- numere care se afla dedesubtul diagonalei principale, i > j
simplu si aici, numarul este mai mic cu 1 decat cel de deasupra lui
3
2 3
1 2 3
- matricea mare
in timp ce iterezi matricea mica (care este de fapt coltul stanga sus al matricei mari)
trebuie sa completezi toate celelalte colturi drepta sus, dreapta jos, stanga jos identificand ce relatii sunt
intre i,j si n

de exemplu, coltul stanga sus cu coltul dreapta jos
ce vrem: a[0][0] = a[4][4] sau a[1][1] = a[3][3] and so on
cum rezolvam: a[i][j] = a[n - i][n - j]

succes

*/

int main()
{
    int n, a[10][10];

    cin >> n;

    for(int i = 1; i <= (n + 1) / 2; i++){
        for(int j = 1; j <= (n + 1) / 2; j++){
            if(i == j){
                a[i][j] = (n + 1) / 2;
            } else if(i < j){
                a[i][j] = a[i][j - 1] - 1;
            } else if(i > j){
                a[i][j] = a[i - 1][j] - 1;
            }

            a[i][n + 1 - j] = a[i][j];
            a[n + 1 - i][n + 1 - j] = a[i][j];
            a[n + 1 - i][j] = a[i][j];
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
