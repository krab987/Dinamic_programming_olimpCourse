#include <string>
#include <stdio.h>
#include <string.h>
#include <cstring>
#include <iostream>

using namespace std;
const int comstMas1[] = { 0,1,1 };
const int constMas2[] = { 2,1,-1 };

int mas[15][15];
int mz[1 << 21];


int Reze(int mask) {

    if (mz[mask] != -1) {
        return mz[mask];
    }
    if (!mask) {
        return 0;
    }

    mz[mask] = 1;
    for (int f = 0; f < 5; f++)
        for (int s = 0; s < 9; s++) {
            if (mas[f][s] == -1) continue;
            for (int i = 0; i < 3; i++) {
                int temp = mask;
                for (int f2 = f, s2 = s; f2 < 5 && f2 >= 0 && s2 < 9 && s2 >= 0; f2 += comstMas1[i], s2 += constMas2[i]) {
                    if (mas[f2][s2] == -1) break;
                    int k = mas[f2][s2];
                    if ((temp & (1 << k)) == 0) break;
                    temp ^= 1 << k;
                    mz[mask] &= Reze(temp);
                }
            }
        }
    return mz[mask] ^= 1;
}


int main() {

    memset(mz, -1, sizeof mz);
    memset(mas, -1, sizeof mas);


    int k = 0;
    for (int i = 2; i <= 6; i += 2) mas[0][i] = k++;
    for (int i = 1; i <= 7; i += 2) mas[1][i] = k++;
    for (int i = 0; i <= 8; i += 2) mas[2][i] = k++;
    for (int i = 1; i <= 7; i += 2) mas[3][i] = k++;
    for (int i = 2; i <= 6; i += 2) mas[4][i] = k++;


    int mask = 0;
    string s;
    for (int i = 0; i < 5; i++) {
        getline(cin, s);
        for (int j = 0; j < s.length(); j++) {
            if (s[j] == 'O') {
                mask |= 1 << mas[i][j];
            }
        }    
    }

    if (Reze(mask)) {
        cout << "Karlsson";
    }
    else {
        cout << "Lillebror";
    }
}
