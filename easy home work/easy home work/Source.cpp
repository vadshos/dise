#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int main() {
	cin.ignore();
	int i = 3;
	int index = 0;
	string login;
	string password;
	bool FirstLogin = true;
	bool FailSingIn = false;
	int count = 0;
	string* arr1 = new string[count];
	ifstream ckeckLogin;

	ckeckLogin.open("Login.txt");
	string secretWord;
	cout << "Login -> ";
	cin >> login;
	cout << "Password -> ";
	cin >> password;
	while (!ckeckLogin.eof()) {
		string l;
		string p;
		getline(ckeckLogin, l);
		getline(ckeckLogin, p);
		getline(ckeckLogin, secretWord);
		
		if (login == l) {
			FirstLogin = false;			
			if(p != password) {
				FailSingIn = true;
				break;
			}
		}
		else if (login + "*" == l) {
			FailSingIn = true;
			cout << "You account blocked" << endl;
			break;
		}
		index += 3;
	}
	ckeckLogin.close();
	if (FailSingIn == true){
		int achion = 0;
		cout << "You enter incorect password you want reset password 1.yes 2.no";
		cin >> achion;
		if (achion == 1) {
			
			while (i != 0) {
				string s;
				cin.ignore();
				cout << "Enter secret word you have "<<i<<" try";
				getline(cin, s);
				if (s == secretWord) {
					ifstream editPassword;
					editPassword.open("Login.txt");
					
					while (!editPassword.eof()) {
						string* temp = new string[count + 1];
						for (int i = 0; i < count; i++) {
							temp[i] = arr1[i];
						}
						getline(editPassword, temp[count]);
						delete[] arr1;
						count++;
						arr1 = new string[count];
						arr1 = temp;
						temp = nullptr;
						delete[] temp;
					}
					editPassword.close();
					ofstream file("Login.txt");
					for (int i = 0; i < count; i++) {
						if (i != index + 2) {

							file << arr1[i] << endl;
						}
						else {
							file << password << endl;
							cout << "You new password is " << password << endl;
						}
					}
					break;
				}
				else {
					i--;
				}
			}
			
		}
		else {
			cout << "Goodbye" << endl;
		}
	}
	if (FirstLogin == true && FailSingIn == false) {
		ofstream addLogin;
		cout << "We create you new accout because you new user in system"<<endl;
		cout << "Please enter secret word for you account" << endl;
		getline(cin, secretWord);
		addLogin.open("Login.txt",ofstream::app);
		addLogin << login<<endl;
		addLogin << password << endl;
		cout << "Please enter secret word for you account" << endl;
		getline(cin, secretWord);
		addLogin << secretWord << endl;
		cout << "Your login is " << login << endl;
		cout << "Your password is " << password << endl;
		cout << "Please don't forget your login and password" << endl;
		addLogin.close();
	}
	else if(FailSingIn == false) {
		cout << "Sing in successful" << endl;
	}
	if (i == 0) {
		ofstream banLogin("Login.txt");
		for (int i = 0; i < count; i++) {
			if (i != index) {

				banLogin << arr1[i] << endl;
			}
			else {
				banLogin << login+"*" << endl;
			}
		}
	}

	return 0;
}
