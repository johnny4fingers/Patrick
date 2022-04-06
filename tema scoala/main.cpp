#include <iostream>

using namespace std;

/*
Se citesc 4 caractere. Afisati in ordine lexicografica cate 1 pe o linie ecran.
*/

int main()
{
    char a, b, c, d, e;

    cin >> a >> b >> c >> d;

    if(a > b){
        e = a;
        a = b;
        b = e;
    }

    if(a > c){
        e = a;
        a = c;
        c = e;
    }

    if(a > d){
        e = a;
        a = d;
        d = e;
    }

    if(b > c){
        e = b;
        b = c;
        c = e;
    }

    if(b > d){
        e = b;
        b = d;
        d = e;
    }

    if(c > d){
        e = c;
        c = d;
        d = e;
    }

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;

    // am vrut sa fac cu tablou dar nu am reusit si am rezolvat-o asa chiar daca ii mai brute force.

    return 0;
}
