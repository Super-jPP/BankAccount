#include "BankAccount.h"
#include <iostream>
using namespace std;

BankAccount::BankAccount(string name, double initBalance) {
	ownerName = name;
	balance = (initBalance >= 0) ? initBalance : 0.0;
}

void BankAccount::deposit(double nbMoney) {
	if (nbMoney > 0) {
		balance += nbMoney;
		cout << "Le depot de " << nbMoney << " $ a ete effectue." << endl;
	}
	else cout << "Le depot doit etre positif." << endl;
}


void BankAccount::withdraw(double nbMoney) {
	if (nbMoney <= 0) {
		cout << "Le montant du retrait doit être positif." << endl;
	}
	else if (nbMoney > balance) {
		cout << "Fonds insuffisants pour retirer " << nbMoney << " €." << endl;
	}
	else {
		balance -= nbMoney;
		cout << "Retrait de " << nbMoney << " € effectué." << endl;
	}
}


double BankAccount::getBalance() const{
	return balance;
}