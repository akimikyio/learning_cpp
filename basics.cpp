#include <iostream>
#include <any>
#include <typeinfo>
#include <memory>

int main() {
    //TODO: Unions, Classes, Structures, Functions

    //Constants
    const int pi = 3.1415;

    //Bitwise operators
    int result1 = 5 & 3; //AND
    int result2 = 5 | 3; //OR
    int result3 = 5 ^ 3; //XOR
    int result4 = ~5; //NOT
    int result5 = 5 >> 3; //shift right
    int result6 = 5 << 3; //shift left
    //std::cout << result2 << std::endl;

    //Lambda functions
    int multiplier = 2;
    auto times = [multiplier](int a) {
        return a * multiplier;
    };
    //std::cout << times(7) << std::endl;

    //Dynamic typing
    void* void_ptr; //is often used in places where you need to be able to work with different pointer types in the same code
    std::any any_value; //class which represents a generalized type-safe container for single values of any type

    //Run-Time Type Indentification (RTTI)
    int some_int = 2345;
    //std::cout << "Type: " << typeid(some_int).name() << std::endl; //identification of data-type

    //There should be information about dynamic_cast and downcasting one type to base, but later

    //Pointers
    //A pointer is a variable that stores the memory address of another variable (or function)
    int number = 10; 
    int* ptr; //stores random memory adress (not initialized)
    int* ptr1 = nullptr; //nullptr (null pointer) is a constant wich represents the adress of nothing
    int* pnumber = &number; //pointer pnumber stores the adress of the number variable
    //std::cout << "number address: " << pnumber << std::endl; //prints an adress of number variable
    //std::cout << "pnumber address: " << &pnumber << std::endl;
    //std::cout << "Address = " << pnumber << std::endl; //prints an adress of number variable
    //std::cout << "Value = " << *pnumber << std::endl; //"*" is an "inderection" / "derefernce operator" and it returns a value of the base object
    *pnumber = 15;
    //std::cout <<  "number = " << number << std::endl; //also we can change the value by adress using dereference operator

    int a = 2;
    int b = 18;
    int* pa = &a; 
    int* pb = &b;
    //std::cout << "*pa value = " << *pa << std::endl;
    //std::cout << "*pb value = " << *pb << std::endl;

    //pa = pb; //assignment one pointer to another
    //std::cout << "*pa value = " << *pa << std::endl;
    //std::cout << "*pb value = " << *pb << std::endl;
    //also i'm too tired to note that we can make references to the pointers (int *p = nullptr; int *&Ref = p)

    /*if (pa > pb)
        std::cout << "pa (" << pa << ") is greater than pb ("<< pb <<")";
    else
        std::cout << "pb (" << pb << ") is greater than pa ("<< pa <<")";
    */
    
    char c = 'N';
    char* pc = &c;
    int* pd = (int*)pc; //pointers type conversion
    void* pv =  (void*)pc;
    //std::cout << "pv=" << pv << std::endl;
    //std::cout << "pd=" << pd << std::endl;

    int n = 10;
    int* pn = &n;
    //std::cout << "address=" << pn << "\tvalue=" << *pn << std::endl;
    pn++;
    //std::cout << "address=" << pn << "\tvalue=" << *pn << std::endl;
    pn--;
    //std::cout << "address=" << pn << "\tvalue=" << *pn << std::endl;

    //TODO: constants and pointers, pointers and arrays 
    //https://metanit.com/cpp/tutorial/4.4.php
    //https://metanit.com/cpp/tutorial/4.5.php

    //Refernces
    int var = 5; //Refernce acts as an alias for another variable or value
    int &refVar = var;
    //std::cout << refVar << std::endl;
    refVar += 20;
    //std::cout << var << std::endl;

    int numbers[] = {1, 2, 3, 4, 5, 6, 7};

    /*
    for (auto &n : numbers) { //usage of reference and for-each cycle
        n = n * n;
    }

    for (auto n : numbers) { //checking the result
        std::cout << n << "\t";
    }
    std::cout << std::endl;
    */

    //If we don't want to change values in collection and want to optimise memory usage
    //using reference instead of new variable we can make the ref const

    /*
    for (const auto &n : numbers) {
        std::cout << n << "\t";
    }
    std::cout << std::endl;
    */

    //Smart Pointers
    //unique_ptr<T> is pointer to type T. It can be only one unique_ptr which contains the same adress
    std::unique_ptr<int> p; //ptr = nullptr
    p = std::make_unique<int>(125); //allocates dynamic memory
    //std::cout << "Adress: " << p.get() << std::endl; //getting adress
    //std::cout << "Initial value: " << *p << std::endl;
    *p = 244;
    //std::cout << "New value: " << *p << std::endl;

    //Also works with arrays
    unsigned q = 5;
    auto qnumbers = std::make_unique<int[]>(q);
    /*for (unsigned i = 0; i < q; i++) {
        qnumbers[i] = i+1;
        std::cout << "qnumbers[" << i << "] = " << qnumbers[i] << std::endl;
    }*/

    /*
    std::cout << "Old adress: " << p.get() << std::endl;
    std::cout << "Old value: " << *p << std::endl;

    p.reset(new int {100}); //frees memory and allocates new object and adress to the pointer

    std::cout << "New address: " << p.get() << std::endl;
    std::cout << "New value: " << *p << std::endl;
    */
    /*
    p.reset(); //frees memory
    if(!qnumbers) {
        std::cout << "Memory is free!" << std::endl; 
    } else {
        std::cout << *p << std::endl;
    }
    */
    return 0;
}