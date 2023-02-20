#include <iostream>

using namespace std;

int main()
{
	int n = 1987;
	cin >> n;
	
	for (int p = n+1; p <= 9876; p++)
	{
		bool res = true;
		int mas[4];
		mas[0] = p / 1000;
		mas[1] = (p / 100) % 10;
		mas[2] = (p / 10) % 10;
		mas[3] = p % 10;

		for (int i = 0; i < 4; i++) {
			for (int j = i + 1; j < 4; j++) {
				if (mas[i] == mas[j])
					res = false;
			}
		}	
		if (res == true) {
			cout << p;
			return 0;
		}
	}
	return 0;
}

