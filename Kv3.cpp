#include <iostream>
using namespace std;
		
int main()
{
	long long res = 0;
	int a, b;
	int min, max;
	
	cin >> a >> b; 
	
	if(a < b){
		min = a;
		max = b;
	}
	else{
		min = b;
		max = a;
	} 
		
	while(min != 0 && max != 0){
		//cout << "min = "<<min<< "  "<< "max = "<<max<<endl;
		if (min <= 1 || max <= 1){
			int temp = max;
			max = min;
			min = temp;
			
			//cout << "swap"<<endl;
			//cout << "min = "<<min<< "  "<< "max = "<<max<<endl;
		}
		min++;
		max -= 2;
		res++;
	}
	
	if(a <= 2 || b <= 2)
		res = 0;
	
	cout << res;
	return 0;
}

