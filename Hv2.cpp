#include <iostream>
using namespace std;

const long long mod = 1e9 + 7;
int matr[3000][3000];
		
int main()
{
	long long res = 0;
	int a, b;
	cin >> a >> b; 
	for (int i = 1; i <= a; i++) {
		matr[1][i] = 1;
	}

	for (int i = 1; i < b; i++) {
		for (int j = 1; j <= a; j++) {
			for (int k = j; k <= a; k += j) {
				matr[i + 1][k] = (matr[i][j] + matr[i + 1][k]) % mod;
			}
		}
	}
	for (int i = 1; i <= a; i++) {
		res += matr[b][i];
	}

	cout << res % mod;
	return 0;
}

