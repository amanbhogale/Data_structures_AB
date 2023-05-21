#include <iostream>

class DB;  // Forward declaration of class DB

class DM {
private:
    int meters;
    int centimeters;

public:
    // Constructor
    DM(int m = 0, int cm = 0) : meters(m), centimeters(cm) {}

    // Friend function declaration for addition
    friend DM addDistance(const DM& dm, const DB& db);

    // Function to display distance in meters and centimeters
    void display() const {
        std::cout << "Distance: " << meters << " meters " << centimeters << " centimeters" << std::endl;
    }
};

class DB {
private:
    int feet;
    int inches;

public:
    // Constructor
    DB(int ft = 0, int in = 0) : feet(ft), inches(in) {}

    // Friend function declaration for addition
    friend DM addDistance(const DM& dm, const DB& db);

    // Function to display distance in feet and inches
    void display() const {
        std::cout << "Distance: " << feet << " feet " << inches << " inches" << std::endl;
    }
};

// Friend function definition for addition
DM addDistance(const DM& dm, const DB& db) {
    int totalMeters = dm.meters;
    int totalCentimeters = dm.centimeters;

    // Convert feet to meters
    double metersFromDB = db.feet * 0.3048;
    // Convert inches to meters
    double metersFromDBInches = db.inches * 0.0254;

    // Add meters and centimeters from DM with converted meters from DB
    totalMeters += static_cast<int>(metersFromDB + metersFromDBInches);
    totalCentimeters += static_cast<int>((metersFromDB + metersFromDBInches - static_cast<int>(metersFromDB + metersFromDBInches)) * 100);

    // Adjust centimeters if greater than or equal to 100
    if (totalCentimeters >= 100) {
        totalMeters += totalCentimeters / 100;
        totalCentimeters = totalCentimeters % 100;
    }

    // Create a new DM object with the calculated distance
    DM result(totalMeters, totalCentimeters);
    return result;
}

int main() {
    // Create objects of DM and DB
    DM dm(5, 75);
    DB db(10, 6);

    // Display distances before addition
    std::cout << "DM: ";
    dm.display();
    std::cout << "DB: ";
    db.display();

    // Add DM with DB using the friend function
    DM result = addDistance(dm, db);

    // Display the result
    std::cout << "Result: ";
    result.display();

    return 0;
}
