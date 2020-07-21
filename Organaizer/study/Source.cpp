
#include<iostream>
#include<string>
#include"windows.h"
#include <stdlib.h>


using namespace std;

int i = 0;
const int size1 = 100;
const int size2 = 3;

int date[size1][size2];
string events[size1];
string priority[size1];

float deleted() {
	int   date1 ;
	int   date2;
	int   date3;
	
	cout << "enter date what you 	wanted delete" << endl;
	cin >> date1 >> date2 >> date3;
	
	for (int j = 0; j < i; j++) {
			if (date[j][0] == date1&& date[j][1] == date2&& date[j][2] == date3) {
				date[j][0] = 0;
				date[j][1] = 0;
				date[j][2] = 0;
				events[j] = "";
				priority[j] = "";

			}
			
	}
	return 0;
}

float input() {
	
	getline(cin, events[i]);
	cout << "enter your events -> "<<endl;
	getline(cin, events[i]);
	cout << "enter date your events -> " << endl;
	cin >> date[i][i] >> date[i][i+1] >> date[i][i+2];
	cout << "enter priority your  events(a,b,c) -> " << endl;
	getline(cin, priority[i]);
	getline(cin, priority[i]);
	i++;
	return 0;
}
float simpleOutput() {
	string str;
	for (int j = 0; j < i; j++) {
		if (priority[j] == "c") {
			SetColor(4, 0);
			cout << events[j] << " (" << date[j] << ") " << "importent" << endl;
			SetColor(15, 0);
		}else if (priority[j] == "b") {
			SetColor(14, 0);
			cout << events[j] << " (" << date[j] << ") " << "midle importent" << endl;
			SetColor(15, 0);
		}else if (priority[j] == "a") {
			SetColor(2, 0);
			cout << events[j] << " (" << date[j] << ") " << "not a importent" << endl;
			SetColor(15, 0);
		}
		
		
	}
	system("pause");
	return 0;
}

void SetColor(int text, int bg) {
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((bg << 4) | text));
}
enum ConsoleColor {
	Black = 0,
	Blue = 1,
	Green = 2,
	Cyan = 3,
	Red = 4,
	Magenta = 5,
	Brown = 6,
	LightGray = 7,
	DarkGray = 8,
	LightBlue = 9,
	LightGreen = 10,
	LightCyan = 11,
	LightRed = 12,
	LightMagenta = 13,
	Yellow = 14,
	White = 15
};


float outputHightDate() {
	int maxDateYear[size1];
	int maxDateMounth[size1];
	int maxDateDays[size1];
	double maxYear = 0;
	double maxMounth = 0;
	double maxDays = 0;
	bool year = false;
	for (int j = 0; j < i; j++) {
		if (date[j][2] > maxYear) {
			for (int g = 0; g < i; g++) {
				if (date[j][2] != maxDateYear[g]) {
					if (g == i-1) {
						string prio;
						if (priority[j] == "c") {
							prio = "importent";
						}else if (priority[j] == "b") {
							prio = "midle importent";
						}
						else {
							prio = "not a  importent";
						}
						cout << events[j] << " (" << date[j][j] << date[j][j + 1] << date[j][j + 2] << ") " << prio  << endl;
					}

				}
			}
		}
		

	}
	for (int j = 0; j < i; j++) {
		if (date[j][1] > maxMounth) {
			for (int g = 0; g < i; g++) {
				if (date[j][1] != maxDateMounth[g]) {
					if (g == i - 1) {
						string prio;
						if (priority[j] == "c") {
							prio = "importent";
						}
						else if (priority[j] == "b") {
							prio = "midle importent";
						}
						else {
							prio = "not a  importent";
						}
						cout << events[j] << " (" << date[j][j] << date[j][j + 1] << date[j][j + 2] << ") " << prio << endl;
					}

				}
			}
		}


	}
	for (int j = 0; j < i; j++) {
		if (date[j][0] > maxDays) {
			for (int g = 0; g < i; g++) {
				if (date[j][0] != maxDateDays[g]) {
					if (g == i - 1) {
						string prio;
						if (priority[j] == "c") {
							prio = "importent";
						}
						else if (priority[j] == "b") {
							prio = "midle importent";
						}
						else {
							prio = "not a  importent";
						}
						cout << events[j] << " (" << date[j][j] << date[j][j + 1] << date[j][j + 2] << ") " << prio << endl;
					}

				}
			}
		}


	}

	return 0;
}
/*float sort_of_ABC() {
	char a[size1] ;
	int index1[size1];
	char tmp;
	bool f;
	do
	{
		f = true;
		for (int i = 0; i < 9; i++)
			if (a[i] > a[i + 1])
			{

				f = false;
				tmp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = tmp;

			}
	} while (!f);
	for (int i = 0; i < size1; i++)
		cout << events[index1[i]] << " (" << date[index1[i]][index1[i]] << date[index1[i]][index1[i+1]] << date[index1[i]][index1[i + 2]] << ") "  << endl;
	return 0;
}*/

float output() {

    int b = 0;
    int a = 0;
	int c = 0;




	for (int j = 0; j < i; j++) {
		if (priority[j] == "c") {
			if (date[j] == 0) {
				break;
			}
			SetColor(4, 0);
			cout << events[j] << " (" << date[j][j] << date[j][j + 1] << date[j][j + 2] << ") " << "importent" << endl;
			SetColor(15, 0);
		}
	}
	for (int j = 0; j < i; j++) {
		if (priority[j] == "b") {
			if (date[j] == 0) {
				break;
			}
			SetColor(14, 0);
			cout << events[j] << " (" << date[j][j] << date[j][j + 1] << date[j][j + 2] << ") " << "midle importent" << endl;
			SetColor(15, 0);
		}
	}
	for (int j = 0; j < i; j++) {
		if (priority[j] == "a") {
			if (date[j] == 0) {
				break;
			}
			SetColor(2, 0);
			cout << events[j] << " (" << date[j][j] << date[j][j + 1] << date[j][j + 2] << ") " << "not a importent" << endl;
			SetColor(15, 0);
		}

	}
	system("pause");

	return 0;
}


void menu() {
		int action = 0;

		do
		{
			cout << "1.Show all events" << endl;
			cout << "2.Remove  events" << endl;
			cout << "3.Add events" << endl;
			cout << "4.Exit" << endl;
			cout << endl;
			cout << "Select action->_";
			cin >> action;

			switch (action)
			{
			case 1: {
				int ach;
				cout << "1.output of date add" << endl;
				cout << "2.output of priority" << endl;
				cout << "3.output of date" << endl;
				cin >> ach;
				if (ach == 1) {
					simpleOutput();
					system("cls");
				}else if (ach == 2) {
					output();
					system("cls");
				}
				else if (ach == 3) {
					outputHightDate();
					system("cls");
				}
					
				
			}break;

			case 2: {
				deleted();
				system("cls");
				
			}break;

			case 3: {
				input();
			}break;

			case 4: {
				cout << "Goodbye" << endl;
			}break;

			}
			
		} while (action != 4);

	}









int main() {
	
	menu();
}
