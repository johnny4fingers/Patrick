#include <iostream>

using namespace std;

int main()
{
    int a[20][20], n, x = 1;

    cin >> n;

    for(int j = 0; j < n; j++){
        for(int i = 0; i < n; i++){
            a[i][j] = n*x;
            x++;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
