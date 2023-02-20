#include <iostream>
using namespace std;
#define mod 1000000007

int main()
{
	long long  n, x = 0, y = 1,temp;
	cin >> n;
	
	
	for (int i = 0; i < n - 1; i++)
	{
		temp = x;
		x = (3 * y) % mod;
		y = (temp + 2 * y) % mod;
	}
	cout << x << endl;
}
