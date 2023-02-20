#include <iostream>
#include <cstring>
using namespace std;

#define module 1000000007
#define ll long long
#define ull unsigned long long


ull a, B, mas[5050][5050];

ull DolbanayaRekursiyaAAAA(ull i, ull j) {

    // exits
    if (i > a) {
        return 0;
    }
    if (j == B) {
        return 1;
    } 
    if (mas[i][j] != -1) {
        return mas[i][j];
    }
        
    //perebrali
    ull rez = 0;
    for (ull k = 1; i * k <= a; k++) {
        if (i * k <= a) {
            rez += DolbanayaRekursiyaAAAA(i * k, j + 1) % module;
        } 
    }

    return mas[i][j] = rez % module;
}



main() {

    memset(mas, -1, sizeof mas);

    cin >> a >> B;
    ull sum = 0;

    for (ull i = 1; i <= a; i++) {
        sum += DolbanayaRekursiyaAAAA(i, 1) % module;
    }

    cout << sum % module << endl;

}
