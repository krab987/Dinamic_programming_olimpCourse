#include <iostream>
#include <cstring>
using namespace std;
#define module 1000000007
#define ll long long
#define ull unsigned long long


main() {
    int a, b;
    cin >> a >> b;

    int two=0, three=0, five=0;

    for (int i = a; i <= b; i++) {

        //two;
        if ((i % 10) % 2 == 0) {
            two++;
        }

        //three;
        int tempThree = i;
        int sumThree = tempThree;
        while (tempThree != 0) {
            tempThree /= 10;
            sumThree += tempThree;
        }
        if (sumThree % 3 == 0) {
            three++;
        }

        //five
        if ((i % 10) == 0 || (i % 10) == 5) {
            five++;
        }

    }

    int res = 0;
	
	
    if (two >= three && two >= five) {
        res = 2;
    }
    if (three >= two && three >= five) {
        res = 3;
    }
    if (five >= three && five >= two) {
        res = 5;
    }
    cout << res;
    
    
    /*
    if (two >= three) {
        if (two >= five) {
            res = 2;
        }
        else {
            res = 5;
        } 
    }
    if (three >= five) {
        res = 3;
    }
    else {
        res = 5;
    }
    */

}
