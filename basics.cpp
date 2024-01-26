#include <iostream>
#include <any>
#include <typeinfo>

int main() {
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

    //TODO: Arythmetics of pointers https://metanit.com/cpp/tutorial/4.3.php
    return 0;
}