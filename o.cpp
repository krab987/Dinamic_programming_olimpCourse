#include <iostream>
#include <cstring>
using namespace std;
#define module 1000000007

const int maxn = 1e5 + 10, inf = 1e9;
int mas[maxn];
int main() {

    int n, a, b, c;
    cin >> n >> a >> b >> c;
    for (int i = 1; i < n + 1; i++)
    {
        mas[i] = -inf;
        if (i >= a)mas[i] = max(mas[i], mas[i - a] + 1);
        if (i >= b)mas[i] = max(mas[i], mas[i - b] + 1);
        if (i >= c)mas[i] = max(mas[i], mas[i - c] + 1);
    }
    cout << mas[n];

    return 0;
}
