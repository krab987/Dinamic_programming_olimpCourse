#include <iostream>

using namespace std;

int main()
{
	unsigned int n = 64;
	long long  res = 0;
	unsigned long long zeros = 1;
	cin >> n;

	for (int i = n; i >= 0; i = i - 4) {
		if (i % 7 == 0) {
			int fours = n - i;

			for (int s = 0; s < i / 7; s++) {
				res = res + 7 * zeros;
				zeros = zeros * 10;
			}

			for (int f = 0; f < fours / 4; f++) {
				res = res + 4 * zeros;
				zeros = zeros * 10;
			}
			cout << res;
			return 0;
		}
	}
	cout << -1;
	return 0;
}

