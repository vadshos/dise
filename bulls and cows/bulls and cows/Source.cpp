#include<iostream>
#include<ctime>
#include"windows.h"
#include<string>
#include<conio.h>

#define CLEAN system("cls");

using namespace std;

int dataFromUser[4];
int dataRandom[4];


float random() {
	srand(time(NULL));
	for (int i = 0; i < 4; i++) {
		dataRandom[i] =    48 +  rand() % 9 ;
	}
	return 0;
}
float getData() {
	cout << "Please enter number" << endl;
	for (int i = 0; i < 4; i++) {
		int d = _getch();
		
		cout << char(d);
		dataFromUser[i] = d;
	}
	return 0;
}

float Logic() {
	random();
	int bulls = 0;
	int cows = 0;
	int trying = 0;
	int win = 0;
	

	do {
		
		trying++;
		
		getData();
		for (int i = 0; i < 4; i++) {
			win = 0;
			cows = 0;
			bulls = 0;
			for (int j = 0; j < 4; j++) {
				if (dataFromUser[i] == dataRandom[j]) {
					cows++;
					

				}
				
				if (dataFromUser[i] == dataRandom[i]) {
					bulls++;
					
				}

			}
		}
		cout << endl;
		cout<<"bulls-> " << bulls << endl;
		cout<<"cows-> " << cows << endl;
		Sleep(1500);
		CLEAN;
	} while (bulls != 4);
	CLEAN;
	cout << "you won for " << trying << " attempts";
	return 0;

}

int main(){
	Logic();
}