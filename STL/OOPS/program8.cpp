#include <iostream>

class MyClass {
private:
    int data;

public:
    MyClass(int value) : data(value) {}

    void setData(int value) {
        data = value;
    }

    int getData() const {
        return data;
    }
};

int main() {
    MyClass* objPtr = new MyClass(10);
    std::cout << "Data value of objPtr: " << objPtr->getData() << std::endl;

    objPtr->setData(20);
    std::cout << "Updated data value of objPtr: " << objPtr->getData() << std::endl;

    delete objPtr;

    return 0;
}
