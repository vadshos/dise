#include<iostream>
#include<ctime>
#include"windows.h"

using namespace std;
const int sizeArray = 100;
int array1[sizeArray] ;
float searchElements() {
	setlocale(LC_ALL, "");
	int element = 0;
	int k = 0;
	cout << "Enter which item you want to find";
	cin >> element;
	for (int i = 0; i < sizeArray; i++) {
		if (element == array1[i]) {
			cout << "Your item is below the index " << i;
			k++;
			cout << endl;
		}
		else if (element != array1[i] && i == sizeArray - 1&&k==0) {
			cout << "Your item is below the index -1";
			cout << endl;
		}
		
	}
	return 0;
}
float output() {
	for (int i = 0; i < sizeArray; i++) {
		cout << " " << array1[i];
	}
	cout << endl;
	return 0;
}
float randomArray() {
	setlocale(LC_ALL, "");
	int first = 0;
	int second = 0;
	cout << "Enter the range of the random array->";
	cin >> first >> second;
	for (int i = 0; i < sizeArray; i++) {
		
		array1[i] = rand() % second + first;
	}

	return 0;
}
float sort() {
	setlocale(LC_ALL, "");
	int action = 0;
	int k = 0;
	cout << "1.Sort by bubbles" << endl;
	cout << "2.	Sort by insert method " << endl;
	cout << "3.Sort by sampling method " << endl;
	cin >> action;
	switch (action)
	{
	case 1: {
		system("cls");
		for (int i = 0; i < sizeArray - 1; i++)
			{
				for (int j = 0; j < sizeArray-1; j++)
				{
					if (array1[j] > array1[j +1])
					{
						int temp = array1[j];
						array1[j] = array1[j + 1];
						array1[j + 1] = temp;
						k++;
						output();
						Sleep(500);
						system("cls");
					}
				}
			}
		cout << k;

	}break;

	case 2: {
		system("cls");
		 for (int i = 0; i < sizeArray; i++)
			{
				int temp = array1[0];
				for (int j = i + 1; j < sizeArray; j++)
				{
					if (array1[i] > array1[j])
					{
						temp = array1[i];
						array1[i] = array1[j];
				        array1[j] = temp;
						k++;
						output();
						Sleep(500);
						system("cls");
					}
				}
			}
		 cout << k;

	}break;

	case 3: {
		system("cls");
		int temp = 0;
		int indexPrev = 0;
		

		for (int i = 1; i < sizeArray; i++)
		{
			temp = array1[i]; 
			indexPrev = i - 1;

			
			while (indexPrev >= 0 && array1[indexPrev] > temp)
			{
				array1[indexPrev + 1] = array1[indexPrev];
				array1[indexPrev] = temp;
				indexPrev--;
				k++;
				output();
				Sleep(500);
				system("cls");
			}

		}
		cout << k;
	}break;

	}
	return 0;
}
float avarege() {
	setlocale(LC_ALL, "");
	int sum = 0;
	for (int i = 0; i < sizeArray; i++) {
		sum += array1[i];
	}
	cout<<"the average value of the array -> " << sum / sizeArray;
	return 0;
}
float ex6() {
	setlocale(LC_ALL, "");
	int k = 0;
	for (int i = 0; i < sizeArray; i++) {
		if (array1[i] % 5 ==0) {
			k++;

		}
	}
	cout << k << "elements of the array are multiples of 5 " ;
	return 0;
}
float ex7(){
	int direction = 0;
	int	number = 0;
	cin >> direction;
	cin >> number;
	if (direction == 1) {
		int tmp = array1[0];
		for (int i = 0; i < number; i++) {
			for (int i = 0; i < sizeArray - 1; i++)
				 tmp = array1[0];
				array1[i] = array1[i + 1];
			array1[sizeArray - 1] = tmp;
		}
	}
	else {
		for (int i = 0; i < number; i++) {
			int tmp = array1[sizeArray - 1];
			for (int i = sizeArray - 1; i > 0; i--)
				tmp = array1[sizeArray - 1];
				array1[i] = array1[i - 1];
			array1[0] = tmp;
		}
	}


	return 0;
}

void managerArray() {
	setlocale(LC_ALL, "UA");
	int action = 0;

	do
	{
		cout << "1.Fill the array with random numbers" << endl;
		cout << "2.Print an array" << endl;
		cout << "3.Find the element in the array " << endl;
		cout << "4.Sort array" << endl;
		cout << "5.Find the average value of the array" << endl;
		cout << "6.Find the number of elements that are multiples of 5" << endl;
		cout << "7.Move array elements " << endl;
		cout << "8.Exit" << endl;
		cout << endl;
		cout << "Select action->_";
		cin >> action;

		switch (action)
		{
		case 1: {
			system("cls");
			randomArray();
			
		}break;

		case 2: {
			system("cls");
			output();
			

		}break;

		case 3: {
			system("cls");
			searchElements();
			
		}break;

		case 4: {
			system("cls");
			sort();


		}break;

		case 5: {
			system("cls");
			avarege();

		}break;
		case 6: {
			system("cls");
			ex6();

		}break;

		case 7: {
			system("cls");
			ex7();

		}
		case 8: {
			cout << "Goodbye" << endl;
		}break;

		}
	} while (action != 8);
	
}

int main() {
	managerArray();
}