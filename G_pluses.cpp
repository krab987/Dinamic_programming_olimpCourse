#include <iostream>

using namespace std;

int main()
{
	unsigned int max, inp;
	unsigned int resNew = 1, resMax = 0;
	int arr[100000];

	cin >> max;

	int i = 0;
	while (i < max && cin >> inp) {
		arr[i] = inp;
		i++;
	}

	for (int j = 1; j < max; j++) {
		if (arr[j] >= arr[j - 1]) {
			resNew++;
			//cout << "ResNew = " << resNew << endl;
		}	
		else {
			resNew = 1;
		}

		if (resNew > resMax) {
			resMax = resNew;
			//cout << "resMax = " << resMax << endl;
		}
	}
	
	if(i == 1)
		resMax = 1;

	cout << resMax;

	return 0;
}

// Просто множ 
// 2 2 1 3 4 1
