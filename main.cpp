#include <iostream>
#include <vector>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountNumber;
    string accountHolderName;
    double balance;

public:
    BankAccount() {
        accountNumber = "1234567890";
        accountHolderName = "blake's imaginary bank account";
        balance = 10000000;
    }

    BankAccount(string accountNumber, string accountHolderName, double balance) {
        this->accountNumber = accountNumber;
        this->accountHolderName = accountHolderName;
        this->balance = balance;
    }

    string getAccountNumber() {
        return accountNumber;
    }

    string getAccountHolderName() {
        return accountHolderName;
    }

    double getBalance() {
        return balance;
    }

    void setAccountHolderName(string accountHolderName) {
        this->accountHolderName = accountHolderName;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        balance -= amount;
    }
};

int main() {
    vector<BankAccount> accounts;

    BankAccount bankAccount;
    accounts.push_back(bankAccount);

    cout << "Account number: " << accounts.back().getAccountNumber() << endl;
    cout << "Account holder name: " << accounts.back().getAccountHolderName() << endl;
    cout << "Balance: " << accounts.back().getBalance() << endl;

    return 0;
}