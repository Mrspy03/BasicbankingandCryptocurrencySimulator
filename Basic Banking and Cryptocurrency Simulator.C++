#include <iostream>
using namespace std;

class Account {
private:
    int balance;
    int dogecoin;
    int bitcoin;

public:
    Account() {
        balance = 50000;
        dogecoin = 0;
        bitcoin = 0;
    }

    bool Deposit(int money) {
        if (money <= 0) {
            return false;
        }

        balance += money;
        return true;
    }

    bool Withdraw(int money) {
        if (money <= 0 || money > balance) {
            return false;
        }

        balance -= money;
        return true;
    }

    void GetAccountInformation() {
        cout << "Account Information:\n";
        cout << "Balance: " << balance << endl;
        cout << "Dogecoin: " << dogecoin << endl;
        cout << "Bitcoin: " << bitcoin << endl;
    }

    void BuyCrypto() {
        cout << "Buying Crypto\n";
        // Logic for buying crypto (for demonstration purposes)
    }

    void SellCrypto() {
        cout << "Selling Crypto\n";
        // Logic for selling crypto (for demonstration purposes)
    }
};

int main() {
    Account person;
    int choice, amount;

    while (true) {
        cout << "**********************" << endl;
        cout << "1. View Account Info" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Buy Crypto" << endl;
        cout << "5. Sell Crypto" << endl;
        cout << "6. Exit" << endl;
        cout << "**********************" << endl;

        cin >> choice;

        switch (choice) {
            case 1:
                person.GetAccountInformation();
                break;

            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                if (person.Deposit(amount)) {
                    cout << "Deposited successfully" << endl;
                } else {
                    cout << "Invalid amount" << endl;
                }
                break;

            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (person.Withdraw(amount)) {
                    cout << "Withdrawn successfully" << endl;
                } else {
                    cout << "Insufficient balance or invalid amount" << endl;
                }
                break;

            case 4:
                person.BuyCrypto();
                cout << "Crypto bought" << endl;
                break;

            case 5:
                person.SellCrypto();
                cout << "Crypto sold" << endl;
                break;

            case 6:
                cout << "Exiting..." << endl;
                return 0;

            default:
                cout << "Invalid choice. Choose a valid option." << endl;
                break;
        }
    }

    return 0;
}

