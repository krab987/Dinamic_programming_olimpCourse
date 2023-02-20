#include <iostream>
#define mod 1000000007

using namespace std;

int w[3] = {1, 1, 0};
int z[3] = {-1, 0, 1};
int n, m, x, i, j, k, l, t, o;
long long f[1000][1000];
    
int main() {
    
    f[0][0] = 1;

    cin >> n >> m >> x;
    if (m < n) {
        cout << 0 << endl;
        return 0;
    }

    for (i = 1; i <= m; i++) {
        if (i < n) t = i;
        else t = n;
        for (j = t; j >= 0; j--) {
            for (k = t - j; k >= 0; k--) {
                if (f[j][k] > 0) {
                    f[j + 1][k] += f[j][k];
                    f[j][k + 1] += f[j][k];
                    if (x == i) f[j][k] = 0;
                    else if (k > 0) f[j + 1][k - 1] += f[j][k];
                    for (o = 0; o < 3; o++) {
                        if (f[j + w[o]][k + z[o]] >= mod) f[j + w[o]][k + z[o]] -= mod;
                    }
                }
            }
        }
    }

    for (i = 1; i <= n; i++) {
        f[n][0] = (f[n][0] * i) % mod;
    }
    cout << f[n][0] << endl;

    return 0;
}
