#include <iostream>
#include <string>
using namespace std;

// Base Class: BankAccount
class BankAccount {
protected:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    BankAccount(int accNum, string accHolderName, double initBalance)
        : accountNumber(accNum), accountHolderName(accHolderName), balance(initBalance) {}

    virtual void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << ". New Balance: " << balance << endl;
    }

    virtual void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrew: " << amount << ". New Balance: " << balance << endl;
        } else {
            cout << "Insufficient funds!" << endl;
        }
    }

    double getBalance() const {
        return balance;
    }

    virtual void displayAccountInfo() const {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }

    virtual ~BankAccount() {}
};


class SavingsAccount : public BankAccount {
private:
    double interestRate; 

public:
    SavingsAccount(int accNum, string accHolderName, double initBalance, double rate)
        : BankAccount(accNum, accHolderName, initBalance), interestRate(rate) {}

    void calculateInterest() {
        double interest = balance * (interestRate / 100);
        cout << "Interest earned: " << interest << endl;
    }

    void displayAccountInfo() const override {
        BankAccount::displayAccountInfo();
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

class CheckingAccount : public BankAccount {
private:
    double overdraftLimit;

public:
    CheckingAccount(int accNum, string accHolderName, double initBalance, double overdraft)
        : BankAccount(accNum, accHolderName, initBalance), overdraftLimit(overdraft) {}

    void withdraw(double amount) override {
        if (amount <= balance + overdraftLimit) {
            balance -= amount;
            cout << "Withdrew: " << amount << ". New Balance: " << balance << endl;
        } else {
            cout << "Withdrawal exceeds overdraft limit!" << endl;
        }
    }

    void displayAccountInfo() const override {
        BankAccount::displayAccountInfo();
        cout << "Overdraft Limit: " << overdraftLimit << endl;
    }
};

class FixedDepositAccount : public BankAccount {
private:
    int term;
    double interestRate; 

public:
    FixedDepositAccount(int accNum, string accHolderName, double initBalance, int duration, double rate)
        : BankAccount(accNum, accHolderName, initBalance), term(duration), interestRate(rate) {}

    void calculateInterest() {
        double interest = balance * (interestRate / 100) * (term / 12.0);
        cout << "Interest for " << term << " months: " << interest << endl;
    }

    void displayAccountInfo() const override {
        BankAccount::displayAccountInfo();
        cout << "Term: " << term << " months" << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

int main() {
    SavingsAccount savings(11, "Arth", 20000.0, 5.5);
    CheckingAccount checking(12, "dhoni", 32000.0, 600.0);
    FixedDepositAccount fixedDeposit(13, "Harsh", 30000.0, 11, 1.0);

   
    savings.displayAccountInfo();
    savings.deposit(5000);
    savings.withdraw(3000);
    savings.getBalance();
    savings.calculateInterest();
    

     cout << endl<< endl << " -------------------------------" << endl << endl << endl;

    checking.displayAccountInfo();
    checking.deposit(3500);
    checking.withdraw(3200);

    cout << endl<< endl << " -------------------------------" << endl << endl;

    fixedDeposit.displayAccountInfo();
    fixedDeposit.calculateInterest();


    return 0;
}