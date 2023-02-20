#include <iostream>
using namespace std;
		
int main()
{
	long long res = 0;
	int a, b;
	cin >> a >> b; 
	
	int tempA = a, tempB = b;
	
	while(a != 0 && b != 0){
		if(a < b){
			a++;
			b -= 2;
		}
		else{
			b++;
			a -= 2;
		}
		res++;
	}
	if(tempA == 1 && tempB == 1){
		res = 0;
	}

	cout << res;
	return 0;
}

