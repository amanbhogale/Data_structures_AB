#include <iostream>
#include <string>

class BankAccount {
private:
    std::string depositorName;
    int accountNumber;
    std::string accountType;
    double balance;

public:
    // Constructor to assign initial values
    BankAccount(const std::string& name, int number, const std::string& type, double initialBalance) {
        depositorName = name;
        accountNumber = number;
        accountType = type;
        balance = initialBalance;
    }

    // Function to deposit an amount
    void deposit(double amount) {
        balance += amount;
    }

    // Function to withdraw an amount after checking the balance
    bool withdraw(double amount) {
        if (amount > balance) {
            std::cout << "Insufficient balance!" << std::endl;
            return false;
        }
        balance -= amount;
        return true;
    }

    // Function to display the name and balance
    void display() {
        std::cout << "Depositor Name: " << depositorName << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Type: " << accountType << std::endl;
        std::cout << "Balance: " << balance << std::endl;
    }
};

int main() {
    // Create an instance of the BankAccount class
    BankAccount account("John Doe", 123456789, "Savings", 1000.0);

    // Deposit an amount
    account.deposit(500.0);

    // Withdraw an amount
    bool withdrawalSuccess = account.withdraw(200.0);
    if (withdrawalSuccess) {
        std::cout << "Withdrawal successful!" << std::endl;
    }

    // Display account details
    account.display();

    return 0;
}
