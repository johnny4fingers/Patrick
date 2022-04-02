#include <iostream>

using namespace std;

int main()
{
    int n, a, b;

    cin >> n >> a >> b;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i % 2 == 1){
                cout << a * j << " ";
            } else {
                cout << b * j << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
