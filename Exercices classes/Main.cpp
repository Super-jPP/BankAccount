#include <iostream>
#include <string>
#include "BankAccount.h"
using namespace std;

int main() {

	string ownerName;
	cout << "Entrez votre Nom de compte : " << endl;
	getline(cin, ownerName);
	BankAccount account(ownerName);

	int choice;
	double nbMoney;

	cout << "Bienvenue " << ownerName << ", faites votre choix." << endl;

	do {
		cout << "1. Deposer de l'argent." << endl;
		cout << "2. Retirer de l'argent." << endl;
		cout << "3. Consulter le compte." << endl;
		cout << "4. Quitter l'application." << endl;
		cout << "Votre choix : ";
		cin >> choice;

		switch (choice) {
		case 1:
			cin >> nbMoney;
			account.deposit(nbMoney);
			break;

		case 2:
			cin >> nbMoney;
			account.withdraw(nbMoney);
			break;

		case 3:
			cout << "Il y a " << account.getBalance() << " $ sur le compte." << endl;
			break;

		case 4:
			break;

		default:
			cout << "Mauvaise entree de saisie." << endl;
			break;
		}
	} while (choice != 4);

	return 0;
}