#include<iostream>
#include<time.h>
#include<iomanip>
#include<string>

using namespace std;





int main() {

	/*int point1 = 0;
	int big = 0;
	int litle = 0;
	int space = 0;
	int point = 0;
	*/
	char arr[255];
	char arr2[255];
	char arr3[255];
	
	cin.getline(arr, 255);
	//for (int i = 0; i < strlen(arr); i++) {
	//	if ( isupper(arr[i])){
	//		big++;
	//	}
	//	else if ( islower(arr[i])) {
	//		litle++;
	//	}
	//	else if (isspace(arr[i])) {
	//		space++;
	//	}
	//	else if (int(arr[i]) < 90 && int(arr[i]) > 32) {
	//		point++;
	//	}

	//	if (int(arr[i]) == 46) {
	//		point1 = i;
	//	}

	//}
	//cout<<"Big sign-> "  << big << endl;
	//cout << "Litle sign-> " << litle << endl;
	//cout << "Space-> " << space << endl;
	//cout << "Char-> " << point << endl;
	//cout << "Last point-> " << point1 << endl;
	//
	int index = 0;
	int stop = 0;
	for (int i = 0; i < 255; i++) {
		if (int(arr[i]) == 43) {
			index = i;
		}
		if (int(arr[i]) == ' ') {
			stop = i;
		}
		
	}
	for (int i = index+1,j=0; i < 255;i++,j++) {
		arr3[j] = arr[i] ;
	}
	
	 strncpy_s(arr2,arr,index);
	 cout << arr2 << endl;
	 cout << arr3 << endl;
	 int number3 = atoi(arr3);
	 int number2 = atoi(arr2);
	 cout<<number3<<" + "<<number2<<" = " << number2 + number3 << endl;

	return 0;
}
