#include <iostream>

using namespace std;

int main()
{

    int n, a[10][10];

    cin >> n;

    for(int i = 1; i <= (n + 1) / 2; i++){
        for(int j = 1; j <= (n + 1) / 2; j++){
            a[i][j] = (i + j) - 1;
            a[i][n + 1 - j] = a[n + 1 - i][j] = a[n + 1 - i][n + 1 - j] = a[i][j];
        }
    }

    for(int i = 1; i <= n; i ++){
        for(int j = 1; j <= n; j ++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
