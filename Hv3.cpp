#include <iostream>
using namespace std;

const long long mod = 1e9 + 7;
		
int main()
{
	long long res = 0;
	int a, b;
	cin >> a >> b; 
	for (int i = 1; i <= a; i++){ // перебор с 1 до a
		cout <<"i = "<<i<<endl<<"------------"<<endl;
		int count = 0;
		for (int j = i; j <= a; j += i){ // перебор всех кратных і, которые не превышают a
			//if(j % i == 0){
				
			//}
			cout << "j = "<<j<<endl;
			count++;
		}
		for(int k=1; k <= count; k++){
			res += k;
		}
		cout << res<<endl;
		cout <<"------------"<<endl;
	}
	

	cout << res % mod;
	return 0;
}

