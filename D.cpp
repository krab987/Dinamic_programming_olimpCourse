#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	const short max = 40;
	long long res = 0;	
	long long a;
	
	int i=0;
	while (cin >> a && i< max){
		i++;
		res += a;
	}

	cout << res;
  	return 0;
}

// Просто множ 

