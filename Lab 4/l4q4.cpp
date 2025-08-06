#include <iostream>
using namespace std;

class Account {
protected:
    string customer_name;
    int account_number;
    string account_type;
    float balance;
public:
    void input() {
        cout << "Enter Customer Name: ";
        cin >> customer_name;
        cout << "Enter Account Number: ";
        cin >> account_number;
        cout << "Enter Account Type: ";
        cin >> account_type;
        balance = 0;
    }
    void deposit(float amount) {
        balance += amount;
        cout << "Deposited: " << amount << ", New Balance: " << balance << endl;
    }
    void withdraw(float amount) {
        if(amount > balance) {
            cout << "Insufficient Balance!\n";
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << ", New Balance: " << balance << endl;
        }
    }
    void display() {
        cout << "Customer: " << customer_name << "\nAccount Number: " << account_number
             << "\nType: " << account_type << "\nBalance: " << balance << endl;
    }
};

class Saving_Account : public Account {
    // You can add extra functionality if needed
};

class Current_Account : public Account {
    // You can add extra functionality if needed
};

int main() {
    Saving_Account s;
    s.input();
    s.deposit(1000);
    s.withdraw(500);
    s.display();

    cout << endl;

    Current_Account c;
    c.input();
    c.deposit(2000);
    c.withdraw(2500); // test insufficient
    c.display();

    return 0;
}
