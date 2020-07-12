#include<iostream>
#include<ctime>
#include<windows.h>
#include<string>

using namespace std;
template <typename Type>
Type checking(Type arr[],Type size) {
	int negative = 0;
	int equaleZero = 0;
	int positive = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] < 0) {
			negative++;
		}else if (arr[i] > 0) {
			positive++;
		}
		else {
			equaleZero++;
		}
	}
	cout << "positive elements ->  " << positive << endl;
	cout << "negative elements -> " << negative << endl;
	cout << "elements equal zero -> " << equaleZero << endl;
	return 0;
}
template <typename Type>
Type random(Type arr[], Type size) {
srand(time(NULL));
	for (int i = 0; i < size; i++) {
		arr[i] = 100 - rand()%- 120;

	}
	return 0;
}

int main() {
	const int size1 = 100;
	int arr1[size1];
	random(arr1, size1);
	checking(arr1, size1);
	
}
