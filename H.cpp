#include <iostream>

using namespace std;

int main()
{
	long res;

	int arr[2], inp;
	int i = 0;
	while (i < 2 && cin >> inp) {
		arr[i] = inp;
		i++;
	}
	int a = arr[0];
	int b = arr[1];

	int b_check = 1;

	for (int j = 1; j <= a; j++) {
		for (int k = j; k <= a; k++) {
			if (k % j == 0) {
				cout << "[" << j << ";" << k << "]" << endl;
				b_check++;
				if (b_check == b) {
					res++;
					b_check = 1;
					cout << "---"<< endl;
				}
				else {
					j = k;
					k = 1;
				}
			}
		}
	}

	cout << res;

	return 0;
}


//
//
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	long res;
//
//	int arr[2], inp;
//	int i = 0;
//	while (i < 2 && cin >> inp) {
//		arr[i] = inp;
//		i++;
//	}
//	int a = arr[0];
//	int b = arr[1];
//
//	int b_check = 1;
//
//	for (int j = 1; j <= a; j++) {
//		for (int k = j; k <= a; k++) {
//			if (k % j == 0) {
//				cout << "[" << j << ";" << k << "]" << endl;
//				b_check++;
//				if (b_check == b) {
//					res++;
//					b_check = 1;
//				}
//			}
//		}
//	}
//
//	cout << res;
//
//	return 0;
//}
