#include <iostream>
#include <string>

class Stud {
private:
    std::string name;
    int age;
    std::string major;

public:
    // Default constructor
    Stud() {
        std::cout << "Default constructor called" << std::endl;
    }

    // Multiple constructors
    Stud(const std::string& n, int a, const std::string& m) : name(n), age(a), major(m) {
        std::cout << "Multiple constructors called" << std::endl;
    }

    // Copy constructor
    Stud(const Stud& other) : name(other.name), age(other.age), major(other.major) {
        std::cout << "Copy constructor called" << std::endl;
    }

    // Overloaded constructor
    Stud(const std::string& n) : name(n), age(0), major("") {
        std::cout << "Overloaded constructor called" << std::endl;
    }

    // Destructor
    ~Stud() {
        std::cout << "Destructor called for student: " << name << std::endl;
    }

    // Function to display student information
    void displayInfo() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Major: " << major << std::endl;
    }
};

int main() {
    // Default constructor
    Stud student1;
    student1.displayInfo();
    std::cout << std::endl;

    // Multiple constructors
    Stud student2("John Doe", 20, "Computer Science");
    student2.displayInfo();
    std::cout << std::endl;

    // Copy constructor
    Stud student3 = student2;
    student3.displayInfo();
    std::cout << std::endl;

    // Overloaded constructor
    Stud student4("Jane Smith");
    student4.displayInfo();
    std::cout << std::endl;

    return 0;
}
