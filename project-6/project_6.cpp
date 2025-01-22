#include<iostream>
using namespace std;

class bankAccount
{
	void accountNumber()
	{
		int accountNumber;
		cout << "Enter your account number: ";
		cin >> accountNumber;
	}
	void accountHolderName()
	{
		char accountHolderName;
		cout << "Enter your account holder name: ";
		cin >> accountHolderName;
	}
	void balance()
	{
		int balance;
		cout << "Enter your balance: ";
		cin >> balance;
	}
};

class SavingsAccount : class bankAccount
{
	void interestRate()
	{
		int interestRate;
		if(balance < interesrRate)
		{
			cout << interestRate << endl;
		}
	}
};

class CheckingAccount : class SavingsAccount
{
	void overdraftLimit()
	{
		cout << balance << endl;
	}
}

int main()
{
	SavingsAccount obj();
	obj.interestRate;
	
	return 0;
}