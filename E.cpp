#include <iostream>

using namespace std;


void Func(unsigned int& res, unsigned int n, int& zeros, unsigned int chislo)
{
	res = chislo;
	for (int i = 1; i < n / chislo; i++) {
		res = res + chislo * zeros;
		zeros = zeros * 10;
	}
}
int main()
{
	unsigned int n = 19;
	unsigned int four = 4, sev = 7;
	unsigned int res;
	int zeros = 10;

	//cin >> n;

	if (n % 4 == 0) {
		Func(res, n, zeros, four);
	}
	if (n % 7 == 0) {
		Func(res, n, zeros, sev);
	}
	else {
		Func(res, n, zeros, four);
		n = n - n / four;
		Func(res, n, zeros, sev);
		if (n % sev != 0)
			res = -1;
	}
	cout << res;


	return 0;
}

