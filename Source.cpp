#include<iostream>
#include<time.h>
using namespace std;

void random(int* arr,int size) {
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		
	}
}

void output(int* arr1, int size1) {
	for (int i = 0; i < size1; i++)
	{
		cout << arr1[i] << " ";
	}
}

void deleteElement(int*& arr2, int& size2,int index1) {
	int* temp = new int[size2];
	for (int i = 0; i < size2;i++ )
	{
		if (i != index1) {
			temp[i] = arr2[i];
			
		}
		
	}
	delete[] arr2;
	size2;
	arr2 = new int[size2-1];
	int j = 0;
	for (int i = 0; i < size2; i++)
	{
		
		
		if (i != index1) {

			arr2[j] = temp[i];
			j++;
		}
		
		
		
	}
	size2--;
	
	
}
void addElement(int*& arr2, int& size2,int index,int number) {
	int* temp = new int[size2+1];
	size2++;
	int j = 0;
	for (int i = 0; i < size2 ; i++)
	{

		if (i != index) {
			
			temp[i] = arr2[j];
			j++;
		}
		else {
			temp[i] = number;
		}
	}
	delete[] arr2;
	arr2 = new int[size2];
	
	for (int i = 0; i < size2; i++)
	{
	
			
			arr2[i] = temp[i];
		
		
	}
	delete[] temp;
	temp = nullptr;
}

int main() {
	srand(time(NULL));
	int count = 0;
	int achion = 0;
	cout << "Enter size arr -> ";
	cin >> count;
	int* ptr = new int[count];
	random(ptr, count);
	do
	{
		cout << "1.output Array" << endl;
		cout << "2.Add elements in array" << endl;
		cout << "3.Delete elements in array" << endl;
		cout << "4.Exit" << endl;
		cout << endl;
		cout << "Enter number achion -> ";
		cin >> achion;
		
		int index = 0;
		switch (achion)
			
		{
		case 1: {
			
			output(ptr, count);
			cout << endl;
		}break;
		case 2: {
			int number = 0;
			cout << "Enter new elements for arr-> ";
			cin >> number;
			cout << "Enter index for this elements-> ";
			cin >> index;
			output(ptr, count);
			addElement(ptr, count, index, number);
			
		}break;
		case 3: {
			output(ptr, count);
			cout << "Enter index for this elements-> ";
			cin >> index;
			deleteElement(ptr, count, index );
			output(ptr, count);
		}break;
		default:
			cout << "Invalid number of achion";
			break;
		}

	} while (achion !=4);
	


	return 0;
}
