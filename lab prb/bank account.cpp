#include <bits/stdc++.h>
using namespace std;

class bankAccount {
private:
    long long accountNumber;
    long long balance;

public:
    string accountHolderName;
    string bankName;

    bankAccount(string accountHolderName, string bankName, long long accountNumber) {
        this->accountHolderName = accountHolderName;
        this->bankName = bankName;
        this->accountNumber = accountNumber;
        balance = 0;
    }

    void deposit(long long amount) {
        balance += amount;
    }

    bool withdraw(long long amount) {
        if (balance >= amount) {
            balance -= amount;
            return true;
        }
        return false;
    }

    long long getBalance() {
        return balance;
    }

    void displayAccountDetails() {
        cout << "Name: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Bank Name: " << bankName << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    string holderName, bankName;
    long long dpost, accountNumber;

    cin >> holderName >> bankName >> accountNumber >> dpost;

    bankAccount hmn1(holderName, bankName, accountNumber);

    hmn1.deposit(dpost);
    hmn1.displayAccountDetails();
    int wdr;
    cin >> wdr;
    hmn1.withdraw(wdr);
    hmn1.displayAccountDetails();

    return 0;
}
