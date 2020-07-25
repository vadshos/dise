#include<iostream>
#include"windows.h"

using namespace std;

string victorine[1][10][6] = { { {"Ancient Greece. Myths","How did Hera thank Cancer, who helped the Lerneian Hydra in the duel with Hercules?","She gave him a river","Made him a constellation","Made him immortal","Made him a constellation"},{"Ancient Greece. Myths","This king ordered the daughters to kill their brides, for which they were doomed by the gods to carry water in a bottomless amphora without ceasing in the gloomy kingdom of Hades.","Oedipus","Danai","Egypt","Danai"},{"Ancient Greece. Myths","Who sympathized with the suffering of Prometheus, chained to the Caucasus Mountains?","Moiri","Oceanids","Eat","Oceanids"},{"Ancient Greece. Myths","Daughter of King Colchis Eeta, who helped Jason steal the golden fleece.","Hestia","Iris","Medea","Medea"},{"Ancient Greece. Myths","What did Odysseus call himself Cyclops Polyphemus?","No one","Nothing","Someone","No one"},{"Ancient Greece. Myths","6. What ordered Hercules to get the Amazon insignificant Eurystheus?","3 pieces of Melanippus","Horse of Antioch","Hippolyta's belt","Hippolyta's belt"},{"Ancient Greece. Myths","This impudent son of 3evs not only stole ragweed and nectar from the gods, but also decided to treat them to an unheard of dish - baked from his own son Pelops. For this he was punished with eternal torment from hunger, thirst and fear.","Antey","Sisyphus","Tantalum","Tantalum"},{"Ancient Greece. Myths","Rebellious and proud Theban queen, daughter of Tantalus, who offended the goddess Leto. She was punished by her children Apollo and Artemis - they killed all her children.","Given","Pasiphae","Niobe","Niobe"},{"Ancient Greece. Myths","The unsurpassed master weaver, who challenged Athena Pallas herself, despised the gods. Athena turned her into a spider.","Arachna","Ariadne","Medea","Arachna"},{"Ancient Greece. Myths","The son of Danai, who defeated Medusa the Gorgon and saved Andromeda, the daughter of King Cepheus and Cassiopeia, from imminent death.","Odysseus","Perseus","Phineas","Perseus"} } };
int win = 0, newVictorins = 0, choiseVictorins = 0,choiseVariants = 0,victorines = 1;
void SetColor(int text, int bg) {
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((bg << 4) | text));
}
void output() {
	SetColor(15, 0);
	for (int i = 0; i < 10; i++) {
		
		for (int j = 1; j < 5; j++) {
			cout << victorine[choiseVictorins][i][j]<<endl;
		}	
		cout << "Enter number variants-> ";
		cin >> choiseVariants;
		system("cls");
		SetColor(15, 0);
		for (int j = 1; j < 5; j++) {
			if (victorine[choiseVictorins][i][j] == victorine[choiseVictorins][i][5]) {
				SetColor(2, 0);
				cout << victorine[choiseVictorins][i][j] << endl;
			}
			else if (victorine[choiseVictorins][i][j] == victorine[choiseVictorins][i][1]) {
				SetColor(15, 0);
				cout << victorine[choiseVictorins][i][j] << endl;
			}
			else {
				SetColor(4, 0);
				cout << victorine[choiseVictorins][i][j] << endl;
			}
			
		}
		SetColor(15, 0);
		if (victorine[choiseVictorins][i][choiseVariants++] == victorine[choiseVictorins][i][5]) {
			win++;
		}
		
	}
	cout << "Correct answers:"<< win <<" out of 10"<<endl;
}
void addNewVictirines() {
	
	cout << "Enter name your victorines" << endl;
	cin >> victorine[victorines][0][0];
	for (int i = 0; i < 10; i++) {
		cout << "Enter question";
		cin >> victorine[victorines][i][1];
		for (int j = 2; j < 5; j++) {
			cout << "Enter variants ";
			cin >> victorine[victorines][i][j];
			string trueVar;
			cout << "This varians true ";
			cin >> trueVar;
			system("cls");
			if (trueVar == "Yes") {
			   victorine[victorines][i][5] = victorine[victorines][i][j];
			}
		}
	}
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
			for (int i = 0; i < victorines; i++) {
				cout << victorine[i][1][0] << endl;
			}
		}
		cout << "Choise victorines enter number ->";
		cin >> choiseVictorins;
		choiseVictorins--;
		system("cls");
		output();
	} while (acshion != 3);
}

