#include <iostream>

using namespace std;

int main()
{
	unsigned int n = 64;
	cin >> n;

	for (int i = n; i >= 0; i = i - 4) {
		if (i % 7 == 0) {
			int fours = n - i;

			for (int f = 0; f < fours / 4; f++) {
				cout << 4;
			}
			for (int s = 0; s < i / 7; s++) {
				cout << 7;
			}

			return 0;
		}
	}
	cout << -1;
	return 0;
}

