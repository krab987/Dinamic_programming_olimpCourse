#include <iostream>
#define mod 1000000007
using namespace std;

main() {
    int count, dolg;
    int mas[100];
    
    cin >> count >> dolg;
    for(int i=0;i<count;i++){
    	cin >> mas[i];
	}
	
	int res = 0;
	for(int i=0;i<count-1;i++){
    	if((mas[i] - mas[i+1] - dolg) > 0 && (mas[i] - mas[i+1] - dolg) > res){
    		res = mas[i] - mas[i+1] - dolg;
    		//i = count; // exitt
		}
	}
    
    cout << res;
    
    return 0;
}    
    

