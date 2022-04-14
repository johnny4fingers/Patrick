#include <iostream>

using namespace std;

int main()
{
    int k, a[100], n, c = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    cin >> k;

    bool gasit = false;

    for(int i = 0; i < n && gasit == false; i++){
        c++;
        if(a[i] == k){
            gasit = true;
            cout << "s-a gasit k pe pozitia : " << i + 1 << " in " << c << " pasi!";
        }
    }

    if(gasit == false){
        cout << "s-au efectuat " << c << " pasi si nu s-a gasit k!";
    }

    return 0;
}
