#include <iostream>
using namespace std;
		
void bubbleSort(int list[], int listLength)
{
	while(listLength--)
	{
		bool swapped = false;
		
		for(int i = 0; i < listLength; i++)
		{
			if(list[i] >= list[i + 1])
			{
				swap(list[i], list[i + 1]);
				swapped = true;
			}
		}
		
		if(swapped == false)
			break;
	}
}		

int main()
{
	int len;
	int mas[12];
	
	cin >> len;
	for(int i = 0; i < 12; i++){
		cin >> mas[i];
	}
	
	bubbleSort(mas,12);
	
	int res = 0;
	int countRes = 0;
	for(int i = 11; i >= 0; i--){
		res += mas[i];
		//cout << res << endl;
		countRes++;
		if(res >= len){
			i = -1; // exit
		}
		
	}
	
	if(len == 0){
		countRes = 0;
	}
	if(res < len){
		countRes = -1;
	}
	
	cout << countRes;

	return 0;
}

