#include <iostream>
#include <string>

using namespace std;

class Account {
private:
    int accountNumber;
    string holderName;
    double balance;

public:
    Account(int accountNumber, string holderName, double initialBalance) {
        this->accountNumber = accountNumber;
        this->holderName = holderName;
        this->balance = initialBalance;
    }

    int getAccountNumber() {
        return accountNumber;
    }

    string getHolderName() {
        return holderName;
    }

    double getBalance() {
        return balance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposit of ₹" << amount << " successful." << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal of ₹" << amount << " successful." << endl;
        } else {
            cout << "Insufficient balance for withdrawal." << endl;
        }
    }
};

class Bank {
private:
    static const int MAX_ACCOUNTS = 100;
    Account* accounts[MAX_ACCOUNTS];
    int numAccounts;

public:
    Bank() : numAccounts(0) {
        for (int i = 0; i < MAX_ACCOUNTS; ++i) {
            accounts[i] = nullptr;
        }
    }

    void addAccount(Account* account) {
        if (numAccounts < MAX_ACCOUNTS) {
            accounts[numAccounts] = account;
            numAccounts++;
        } else {
            cout << "Maximum number of accounts reached." << endl;
        }
    }

    Account* getAccount(int accountNumber) {
        for (int i = 0; i < numAccounts; i++) {
            if (accounts[i]->getAccountNumber() == accountNumber) {
                return accounts[i];
            }
        }
        return nullptr;
    }

    void displayAllAccounts() {
        cout << "Bank Accounts:" << endl;
        for (int i = 0; i < numAccounts; i++) {
            cout << "Account Number: " << accounts[i]->getAccountNumber() << endl;
            cout << "Holder's Name: " << accounts[i]->getHolderName() << endl;
            cout << "Balance: ₹" << accounts[i]->getBalance() << endl;
            cout << endl;
        }
    }
};

int main() {
    int numAccounts;
    cout << "Enter the number of accounts: ";
    cin >> numAccounts;
    cout << endl;
    
    Bank bank;
    cout << "Welcome to the bank:" << endl;
    cout << endl;

    for (int i = 0; i < numAccounts; ++i) {
        int accountNumber;
        string holderName;
        double initialBalance;

        cout << "Enter details for account " << i + 1 << ":" << endl;
        cout << "Account Number: ";
        cin >> accountNumber;
        cout << "Holder's Name: ";
        cin.ignore();
        getline(cin, holderName);
        cout << "Initial Balance: ";
        cin >> initialBalance;
        cout << endl;
        
        Account* account = new Account(accountNumber, holderName, initialBalance);
        bank.addAccount(account);
    }

    bank.displayAllAccounts();

    int accountNumber;
    cout << "Enter the account number for transactions: ";
    cin >> accountNumber;
    Account* selectedAccount = bank.getAccount(accountNumber);
    if (selectedAccount != nullptr) {
        char choice;
        do {
            cout << "Select Transaction Type (D: Deposit, W: Withdraw, Q: Quit): ";
            cin >> choice;
            switch(choice) {
                case 'D':
                case 'd':
                    double depositAmount;
                    cout << "Enter deposit amount: ";
                    cin >> depositAmount;
                    selectedAccount->deposit(depositAmount);
                    break;
                case 'W':
                case 'w':
                    double withdrawAmount;
                    cout << "Enter withdraw amount: ";
                    cin >> withdrawAmount;
                    selectedAccount->withdraw(withdrawAmount);
                    break;
                case 'Q':
                case 'q':
                    cout << "Exiting transaction menu." << endl;
                    break;
                default:
                    cout << "Invalid choice. Please try again." << endl;
            }
        } while (choice != 'Q' && choice != 'q');
    } else {
        cout << "Account not found." << endl;
    }
    
    cout << "Updated Account Details:" << endl;
    bank.displayAllAccounts();

    return 0;
}