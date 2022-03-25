#include <iostream>

using namespace std;

int main()
{
    int n, a[21][21];

    cin >> n;

    a[1][1] = a[1][2] = a[2][1] = 1;

    for(int i = 3; i <= n; i++){
        a[1][i] = a[i][1] = a[1][i - 2] + a[1][i - 1];
    }

    for(int i = 2; i <= n; i++){
        for(int j = 2; j <= n; j++){
            a[i][j] = a[i - 1][j] + a[i][j - 1];
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
