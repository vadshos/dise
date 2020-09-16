#include<iostream>
#include<math.h>
#include"windows.h"
using namespace std;

int countFraction = 0;
struct Fraction
{
	int date;
	int denominator;
	int date2;
	int denominator2;
	int resultDate;
	int resultDenominatoe;
};



int main() {
	setlocale(LC_ALL, "");
	int achion = 0;
	do
	{
		cout << "Відняти дроби" << endl;
		cout << "Додати дроби" << endl;
		cout << "Помножити дроби" << endl;
		cout << "Поділити дроби" << endl;
		cout << "Вийти" << endl;
		cin >> achion;
		switch (achion)
		{
		case 2: {
			Fraction newFraction;
			cout << "Введіть 1 чисельник -> ";
			cin >> newFraction.date;
			system("cls");
			cout << "Введіть 1 знаменник -> ";
			cin >> newFraction.denominator;
			system("cls");
			cout << "Введіть 2 чисельник -> ";
			cin >> newFraction.date2;
			system("cls");
			cout << "Введіть 2 чисельник -> ";
			cin >> newFraction.denominator2;
			system("cls");
			newFraction.resultDate = (newFraction.date * newFraction.denominator2) + (newFraction.date2 * newFraction.denominator);
			newFraction.resultDenominatoe = newFraction.denominator2 * newFraction.denominator;
			if (newFraction.resultDate > newFraction.resultDenominatoe)
			{
					int temp = ceil(newFraction.resultDate / newFraction.resultDenominatoe);
						cout << " " << newFraction.date << '\t' << " " << '\t' << " " << newFraction.date2 << "\t\t" << " " << (newFraction.resultDate/5) << endl;
					cout << "---" << '\t' << "+" << '\t' << "---" << "\t=\t" << temp << "---" << endl;
					cout << " " << newFraction.denominator << '\t' << " " << '\t' << " " << newFraction.denominator2 << "\t\t" << " " << newFraction.resultDenominatoe << endl;
				
			}else if (newFraction.resultDate == newFraction.resultDenominatoe) {
				cout << " " << newFraction.date << '\t' << " " << '\t' << " " << newFraction.date2 << "\t\t" << " " << endl;
				cout << "---" << '\t' << "+" << '\t' << "---" << "\t=\t" << (newFraction.resultDate / newFraction.resultDenominatoe) << endl;
				cout << " " << newFraction.denominator << '\t' << " " << '\t' << " " << newFraction.denominator2 << "\t\t" << " " << endl;
			}
			else {
				cout << " " << newFraction.date << '\t' << " " << '\t' << " " << newFraction.date2 << "\t=\t" << " " << newFraction.resultDate << endl;
				cout << "---" << '\t' << "+" << '\t' << "---" << "\t\t" << "---" << endl;

				cout << " " << newFraction.denominator << '\t' << " " << '\t' << " " << newFraction.denominator2 << "\t=\t" << " " << newFraction.resultDenominatoe << endl;
			}
		}break;
		case 1: {

			Fraction newFraction;
			cout << "Введіть 1 чисельник -> ";
			cin >> newFraction.date;
			system("cls");
			cout << "Введіть 1 знаменник -> ";
			cin >> newFraction.denominator;
			system("cls");
			cout << "Введіть 2 чисельник -> ";
			cin >> newFraction.date2;
			system("cls");
			cout << "Введіть 2 знаменник -> ";
			cin >> newFraction.denominator2;
			system("cls");
			newFraction.resultDate = (newFraction.date * newFraction.denominator2) - (newFraction.date2 * newFraction.denominator);
			if (newFraction.resultDate < 0) {
				newFraction.resultDate = (newFraction.date2 * newFraction.denominator) - (newFraction.date * newFraction.denominator2);
			}
			newFraction.resultDenominatoe = newFraction.denominator2 * newFraction.denominator;
			if (newFraction.resultDate == 0) {
				cout << " " << newFraction.date << '\t' << " " << '\t' << " " << newFraction.date2 << endl;
				cout << "---" << '\t' << "-" << '\t' << "---" << "\t = \t" << 0 << endl;

				cout << " " << newFraction.denominator << '\t' << " " << '\t' << " " << newFraction.denominator2 << endl;

			}
			else {
				cout << " " << newFraction.date << '\t' << " " << '\t' << " " << newFraction.date2 << "\t\t" << " " << newFraction.resultDate << endl;
				cout << "---" << '\t' << "-" << '\t' << "---" << "\t=\t" << "---" << endl;
				cout << " " << newFraction.denominator << '\t' << " " << '\t' << " " << newFraction.denominator2 << "\t\t" << " " << newFraction.resultDenominatoe << endl;
			}
		}break;
		case 3: {
			Fraction newFraction;
			cout << "Введіть 1 чисельник -> ";
			cin >> newFraction.date;
			system("cls");
			cout << "Введіть 1 знаменник -> ";
			cin >> newFraction.denominator;
			system("cls");
			cout << "Введіть 2 чисельник -> ";
			cin >> newFraction.date2;
			system("cls");
			cout << "Введіть 2 чисельник -> ";
			cin >> newFraction.denominator2;
			system("cls");
			newFraction.resultDate = (newFraction.date * newFraction.date2);
			newFraction.resultDenominatoe = newFraction.denominator2 * newFraction.denominator;
			if (newFraction.resultDate > newFraction.resultDenominatoe)
			{
				int temp = ceil(newFraction.resultDate / newFraction.resultDenominatoe);
				cout << " " << newFraction.date << '\t' << " " << '\t' << " " << newFraction.date2 << "\t\t" << " " << (newFraction.resultDate / 5) << endl;
				cout << "---" << '\t' << "*" << '\t' << "---" << "\t=\t" << temp << "---" << endl;
				cout << " " << newFraction.denominator << '\t' << " " << '\t' << " " << newFraction.denominator2 << "\t\t" << " " << newFraction.resultDenominatoe << endl;

			}
			else if (newFraction.resultDate == newFraction.resultDenominatoe) {
				cout << " " << newFraction.date << '\t' << " " << '\t' << " " << newFraction.date2 << "\t\t" << " " << endl;
				cout << "---" << '\t' << "*" << '\t' << "---" << "\t=\t" << (newFraction.resultDate / newFraction.resultDenominatoe) << endl;
				cout << " " << newFraction.denominator << '\t' << " " << '\t' << " " << newFraction.denominator2 << "\t\t" << " " << endl;
			}
			else {
				cout << " " << newFraction.date << '\t' << " " << '\t' << " " << newFraction.date2 << "\t=\t" << " " << newFraction.resultDate << endl;
				cout << "---" << '\t' << "*" << '\t' << "---" << "\t\t" << "---" << endl;

				cout << " " << newFraction.denominator << '\t' << " " << '\t' << " " << newFraction.denominator2 << "\t=\t" << " " << newFraction.resultDenominatoe << endl;
			}
		}break;
		case 4: {
			Fraction newFraction;
			cout << "Введіть 1 чисельник -> ";
			cin >> newFraction.date;
			system("cls");
			cout << "Введіть 1 знаменник -> ";
			cin >> newFraction.denominator;
			system("cls");
			cout << "Введіть 2 чисельник -> ";
			cin >> newFraction.date2;
			system("cls");
			cout << "Введіть 2 чисельник -> ";
			cin >> newFraction.denominator2;
			system("cls");
			newFraction.resultDate = (newFraction.date * newFraction.denominator2);
			newFraction.resultDenominatoe = newFraction.date2 * newFraction.denominator;
			if (newFraction.resultDate > newFraction.resultDenominatoe)
			{
				int temp = ceil(newFraction.resultDate / newFraction.resultDenominatoe);
				cout << " " << newFraction.date << '\t' << " " << '\t' << " " << newFraction.date2 << "\t\t" << " " << (newFraction.resultDate / 5) << endl;
				cout << "---" << '\t' << "/" << '\t' << "---" << "\t=\t" << temp << "---" << endl;
				cout << " " << newFraction.denominator << '\t' << " " << '\t' << " " << newFraction.denominator2 << "\t\t" << " " << newFraction.resultDenominatoe << endl;

			}
			else if (newFraction.resultDate == newFraction.resultDenominatoe) {
				cout << " " << newFraction.date << '\t' << " " << '\t' << " " << newFraction.date2 << "\t\t" << " " << endl;
				cout << "---" << '\t' << "/" << '\t' << "---" << "\t=\t" << (newFraction.resultDate / newFraction.resultDenominatoe) << endl;
				cout << " " << newFraction.denominator << '\t' << " " << '\t' << " " << newFraction.denominator2 << "\t\t" << " " << endl;
			}
			else {
				cout << " " << newFraction.date << '\t' << " " << '\t' << " " << newFraction.date2 << "\t=\t" << " " << newFraction.resultDate << endl;
				cout << "---" << '\t' << "/" << '\t' << "---" << "\t\t" << "---" << endl;

				cout << " " << newFraction.denominator << '\t' << " " << '\t' << " " << newFraction.denominator2 << "\t=\t" << " " << newFraction.resultDenominatoe << endl;
			}
		}break;
		default:
			break;
		}

	} while (achion != 5);
}
