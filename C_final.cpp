#include <iostream>
using namespace std;

int main()
{
	long long a, b;
	unsigned long long res;	
	cin >> a >> b;	
	

	if (a < 0 && b>0)
	{
		a *= -1;
		cout <<"-";
	}
	if (a > 0 && b<0)
	{
		b *= -1;
		cout <<"-";
	} 
	if (a < 0 && b < 0)
	{
		b *= -1;
		a *= -1;
	}
	res = a * b;
	cout << res;
		
	return 0;
}
