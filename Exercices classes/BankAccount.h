#pragma once
#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
using namespace std;


class BankAccount
{public:
	BankAccount(string name, double initBalance = 0.0);
	void deposit(double nbMoney);
	void withdraw(double nbMoney);
	double getBalance() const;

private:
	string ownerName;
	double balance;
};

#endif