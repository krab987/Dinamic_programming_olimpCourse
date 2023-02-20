#define mod 1000000007
#define ll long long
#include <iostream>
using namespace std;

int main()
{
	ll n,m,x;
	cin >> n >> m >> x;
	
	for(int i = 1;i<=m;i=i+n){
		
	}
	
	
	
	
	int w[3] = { 1,1,0 };
	int z[3] = { -1,0,1 };
	long long n, m, x, i, j, k, l, t, o;
	int f[1000][1000];

	f[0][0] = 1;
	cin >> n >> m >> x;

	if (m < n) {
		cout << 0;
		return 0;
	}
	for (int i = 1; i <= m; i++) {
		if (i < n) {
			t = i;
		}
		else {
			t = n;
		}
		for (int j = t; j >= 0; j--) {
			for (int k = t - j; k >= 0; k--) {
				if (f[j][k] > 0) {
					f[j + 1][k] += f[j][k];
					f[j][k + 1] += f[j][k];
					if (x = i) {
						f[j][k] = 0;
					}
					else if (k > 0) {
						f[j + 1][k - 1] += f[j][k];
					}
					for (int o = 0; o <= 2; o++) {
						if (f[j + w[o]][k + z[o]] >= mod) {
							f[j + w[o]][k + z[o]] -= mod;
						}
					}
				}

			}
		}
	}

	for (int i = 1; i < n; i++) {
		f[n][0] = f[n][0] * i % mod;
	}
	cout << f[n][0];

	return 0;
}




