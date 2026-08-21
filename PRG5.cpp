#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double b) { balance = b; }

    void deposit(double amt) {
        balance += amt;
        cout << "Deposited: " << amt << endl;
    }

    void withdraw(double amt) {
        if (amt <= balance) {
            balance -= amt;
            cout << "Withdrawn: " << amt << endl;
        } else {
            cout << "Insufficient balance!\n";
        }
    }

    void showBalance() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc(1000);

    acc.deposit(500);
    acc.withdraw(200);
    acc.showBalance();

    return 0;
}
