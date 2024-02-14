#include "MyClass.hpp"
#include <iostream>

MyClass::MyClass() {
    //constructor implementation
}

int MyClass::myMethod(int x, int y) {
    //method implementation
    std::cout << "Sum = " << x + y << std::endl;
}
