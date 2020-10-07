#include<iostream>
#include<string>
using namespace std;


int main() {
	//exersise №1
	#include <iostream>
#include <string>
#include <time.h>

using namespace std;
int lenghtString(string str) {
   char arr[255];
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
	return index;
}

int main() {
	int sizeString = 0;
	string str;
	int index = 0;
	getline(cin, str);
	index = lenghtString(str);
	cout << "Lenght your string is " << index << endl;
}
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
