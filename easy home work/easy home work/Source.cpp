#include<iostream>
#include<string>
using namespace std;


int main() {
	//exersise №1
	/*string str;
	char arr[255];
	getline(cin, str);
	int index = 0;
		strcpy_s(arr, str.c_str());
		for (int i = 0; i < 255; i++) {
			
			cout << arr[i];
			if (arr[i] == '\0') {
				break;
			}
			index++;
	}
		cout << endl;
		
		
		cout << index << endl;
		return 0;*/
	//exersise №2
	string str  ;
	getline(cin, str);
	char elements;
	cin >> elements;

	
	

	while (true)
	{
		int index = str.find(elements);
		if (index >= 0)
		{
			str.erase(index, 1);
		}
		else
		{
			break;
		}
	}

	cout << str << endl;
	
}
