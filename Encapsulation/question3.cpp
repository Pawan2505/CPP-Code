#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;  

public:
   
    BankAccount(double initialBalance) {
        balance = initialBalance;
    }

 
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }


    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        } else {
            cout << "Invalid withdrawal amount or insufficient funds!" << endl;
        }
    }

   
    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount account(1000.0);
    account.deposit(500.0);
    account.withdraw(200.0);
    cout << "Current Balance: " << account.getBalance() << endl;

    return 0;
}
