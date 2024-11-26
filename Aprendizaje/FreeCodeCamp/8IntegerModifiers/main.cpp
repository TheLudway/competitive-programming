#include <iostream>

int main(){

    // signed variables (4 bytes)

    signed int value {10};
    signed int value2 {-300};

    std::cout << "value : " << value << std::endl;
    std::cout << "value2 : " << value2 << std::endl;
    std::cout << "sizeof(value) : " << sizeof(value) << std::endl;
    std::cout << "sizeof(value2) : " << sizeof(value2) << std::endl;

    // unsigned modificador, solo positivos (4 bytes)
    unsigned int value3 {4};
    // unsigned int value4 {-2}; // unsigned, solo se pueden colocar valores negativos

    std::cout << "value3 : " << value3 << std::endl;
    std::cout << "sizeof(value3) : " << sizeof(value3) << std::endl;
    // std::cout << "value4 : " << value4 << std::endl;


    return 0;
}
