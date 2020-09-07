#include<iostream>
#include<string>
#include"windows.h"

using namespace std;
int win = 0, newVictorins = 0, choiseVictorins = 0, choiseVariants = 0, victorines = 0, questiones = 0, variants = 0;
string* victorine = new string[victorines];
string* questions = new string[questiones];
string* variantes = new string[variants];
int* trueVariantes = new int[questiones];
int* indexForOutput = new int[victorines];
int* indexForOutput2 = new int[victorines];
int* startQuestion = new int[victorines];
int* startVariantes = new int[victorines];



void SetColor(int text, int bg) {
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((bg << 4) | text));
}
void output() {
	SetColor(15, 0);

	for (int i = startQuestion[choiseVictorins - 1]; i < indexForOutput2[choiseVictorins - 1]; i++) {
		questions[i];
		for (int j = startVariantes[choiseVictorins - 1]; j < indexForOutput[choiseVictorins]; j++) {
			variantes[j];
		}
		cout << "Enter number variants-> ";
		cin >> choiseVariants;
		system("cls");
		SetColor(15, 0);
		

	}
	cout << "Correct answers:" << win << " out of " << indexForOutput2[choiseVictorins] << endl;
}
void addNewVictirines() {
	int question = 0;
	int variantes2 = 0;
	int writeStartNumber = variants;
	cout << "How many question you want -> ";
	cin >> question;
	cout << "How many variants you want -> ";
	cin >> variantes2;


	system("cls");


	string* tempVictorines = new string[victorines + 1];
	string* tempQuestion = new string[questiones + question];
	string* tempVariantes = new string[(questiones * variants) + (question * variantes2)];
	int* tempTrueVariantes = new int[questiones + question];
	for (int i = 0; i < victorines; i++) {
		tempVictorines[i] = victorine[i];
	}
	for (int i = 0; i < questiones; i++) {
		tempQuestion[i] = questions[i];
	}
	for (int i = 0; i < variants; i++) {
		tempVariantes[i] = variantes[i];
	}
	victorines++;
	indexForOutput = new int[victorines];
	indexForOutput2 = new int[victorines];
	startQuestion = new int[victorines];
	startVariantes = new int[victorines];

	for (int i = 0; i < victorines; i++) {
		cout << "Enter name your victorines" << endl;
		cin.ignore();
		getline(cin, tempVictorines[victorines - 1]);
		for (int j = questiones; j < (question + questiones); j++)
		{
			cout << "enter question" << endl;
			cin.ignore();
			getline(cin, tempQuestion[j]);
			bool trueVariants = false;
			for (int g = variants; g < (variants + variantes2); g++)
			{
				cout << "enter variants  " << endl;
				cin.ignore();
				getline(cin, tempVariantes[g]);
				if (trueVariants == false) {
					cout << "this variants is true -> ";
					string ach;
					cin >> ach;
					if (ach == "yes") {
						tempTrueVariantes[j] = g;
						trueVariants = true;
					}

				}

			}

		}
	}
	startQuestion[victorines - 1] = questiones;
	startVariantes[victorines - 1] = variants;
	questiones += question;
	variants += variantes2;
	indexForOutput[victorines - 1] = variants;
	indexForOutput2[victorines - 1] = questiones;

	victorine = new string[victorines];
	questions = new string[questiones];
	variantes = new string[variants];
	trueVariantes = new int[questiones];
	for (int i = 0; i < victorines; i++) {
		victorine[i] = tempVictorines[i];
	}
	for (int i = 0; i < questiones; i++) {
		questions[i] = tempQuestion[i];
		trueVariantes[i] = tempTrueVariantes[i];
	}
	for (int i = 0; i < variants; i++) {
		variantes[i] = tempVariantes[i];
	}


	delete[] tempVictorines;
	delete[] tempQuestion;
	delete[] tempVariantes;
	delete[] tempTrueVariantes;

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
				cout << questions[0];
				cout << "Choise victorines enter number ->";
				cin >> choiseVictorins;

				system("cls");
				output();
			}
		}

	} while (acshion != 3);
}
