#include<iostream>
#include <windows.h>
int arr[20];

using namespace std;


// exersise 2

float easy(float sizeX, float sizeY) {
	system("color 7");

	for (int j = 0; j < sizeY; j++) {
		for (int i = 0; i < sizeX; i++) {
			cout << char(254);
		}
		cout << endl;
	}
	return 0;
}
//int main() {
//	int a = 0;
//	int b = 0;
//
//	cin >> a;
//	cin >> b;
// system("cls");
//	easy(a, b);
//}
//
float change() {
	for (int i = 0; i < 20; i++) {
		arr[i] = rand() % 100;
		cout << " " << arr[i];
	}
	cout << endl;
	int number;
	int elements;
	cin >> number;
	cin >> elements;
	arr[number] = elements;
	for (int i = 0; i < 20; i++) {
		
		cout<<" " << arr[i];
	}
	return 0;


}
int main() {
	change();
}