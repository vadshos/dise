#include<iostream>
#include<string>
#include"windows.h"

using namespace std;
int win = 0, newVictorins = 0, choiseVictorins = 0, choiseVariants = 0, victorines = 0, questiones = 0, variants = 0;
string* victorine = new string [victorines];
string* questions = new string[questiones];
string* variantes = new string[variants];
string* trueVariantes = new string[questiones];
int* indexForOutput = new int  [victorines];
int* indexForOutput2 = new int[victorines];


void SetColor(int text, int bg) {
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((bg << 4) | text));
}
void output() {
	SetColor(15, 0);
	for (int i = indexForOutput[choiseVictorins - 1]; i < indexForOutput[choiseVictorins]; i++) {
		for (int j = indexForOutput[choiseVictorins - 1]; j < indexForOutput[choiseVictorins]; j++) {
			variantes[j];
		}
		cout << "Enter number variants-> ";
		cin >> choiseVariants;
		system("cls");
		SetColor(15, 0);
		for (int j = indexForOutput[choiseVictorins - 1]; j < indexForOutput[choiseVictorins]; j++) {
			if (variantes[choiseVictorins - 1] == trueVariantes[choiseVictorins - 1]) {
				SetColor(2, 0);
				variantes[j];
			}
			
			else {
				SetColor(4, 0);
				variantes[j];
			}
		}
		SetColor(15, 0);
		if (variantes[choiseVariants-1] == trueVariantes[i]) {
			win++;
		}

	}
	cout << "Correct answers:" << win << " out of 10" << endl;
}
void addNewVictirines() {
	int question = 0;
	int variantes2 = 0;
	int writeStartNumber = 0;
	victorines + 1;
	cout << "How many question you want -> ";
	cin >> question;
	cout << "How many variants you want -> ";
	cin >> variantes2;
	questiones += question;
	variants += variantes2;

	system("cls");
	indexForOutput[victorines - 1] = variants;
	indexForOutput2[victorines - 1] = question;
	string* tempVictorines = new string[1];
	string* tempQuestion = new string[question];
	string* tempVariantes = new string[variants*question];
	string* tempTrueVariantes = new string[question];
	for (int i = 0; i < victorines+1;i++) {
		cout << "Enter name your victorines" << endl;
		getline(cin, tempVictorines[victorines]);
		for (int j = questiones; j <( question + questiones+1); j++)
		{
			cout << "enter question" << endl;
			getline(cin, tempQuestion[j]);
			
			for (int g = writeStartNumber; g <( writeStartNumber + variantes2); g++)
			{
				bool trueVariants = false;
				cout << "enter variants  " << endl;
				getline(cin, tempVariantes[g]);
				if (trueVariants == false) {
					cout << "this variants is true";
					string ach;
					cin >> ach;
					if (ach == "yes") {
						tempTrueVariantes[j] = tempVariantes[g];
						trueVariants = true;
					}
					else {
						continue;
					}
				}
				
			}
			writeStartNumber += variantes2;
		}
	}
	victorine[victorines] = tempVictorines[0];
	for (int i = (questiones - question); i < (questiones + question); i++) {
		questions[i] = tempQuestion[i - questiones];
		trueVariantes[i] = tempTrueVariantes[i];
	}
	for (int i = (variants - variantes2); i < (variants + variantes2); i++) {
		variantes[i] = tempVariantes[i - variants];
	}
	

	delete[]victorine;
	delete[]questions;
	delete[]variantes;
	delete[]trueVariantes;

}
int main() {
	int acshion = 0;
	do {
		cout << "Add new victorines" << endl;
		cout << "Print all victorines" << endl;
		cout << "Exit" << endl;
		cin >> acshion;
		system("cls");
		if (acshion == 1) {
			addNewVictirines();
		}
		else if (acshion == 2) {
			for (int i = 0; i < victorines + 1; i++) {
				cout << victorine[i] << endl;
				cout << "Choise victorines enter number ->";
				cin >> choiseVictorins;
				choiseVictorins--;
				system("cls");
				output();
			}
		}

	} while (acshion != 3);
}
