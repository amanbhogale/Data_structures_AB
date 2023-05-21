#include <iostream>
#include <string>

// Base class: Person
class Person {
protected:
    std::string name;

public:
    // Constructor
    Person(const std::string& n) : name(n) {}

    // Function to display person information
    void displayInfo() const {
        std::cout << "Name: " << name << std::endl;
    }
};

// Derived class: Account
class Account : public Person {
protected:
    std::string accountNumber;

public:
    // Constructor
    Account(const std::string& n, const std::string& accNum) : Person(n), accountNumber(accNum) {}

    // Function to display account information
    void displayInfo() const {
        Person::displayInfo();
        std::cout << "Account Number: " << accountNumber << std::endl;
    }
};

// Derived class: Admin
class Admin : public Person {
protected:
    std::string adminID;

public:
    // Constructor
    Admin(const std::string& n, const std::string& id) : Person(n), adminID(id) {}

    // Function to display admin information
    void displayInfo() const {
        Person::displayInfo();
        std::cout << "Admin ID: " << adminID << std::endl;
    }
};

// Derived class: Master
class Master : public Account, public Admin {
public:
    // Constructor
    Master(const std::string& n, const std::string& accNum, const std::string& id)
        : Account(n, accNum), Admin(n, id) {}

    // Function to display master information
    void displayInfo() const {
        Account::displayInfo();
        Admin::displayInfo();
    }
};

int main() {
    // Create a Master object
    Master master("John Doe", "123456789", "ADM001");

    // Display master information
    master.displayInfo();

    return 0;
}
