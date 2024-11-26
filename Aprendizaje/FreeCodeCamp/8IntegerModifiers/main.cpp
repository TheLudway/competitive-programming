#include <iostream>

int main(){

    // signed variables (4 bytes)
    std::cout << "----- enteros signed -----" << std::endl;
    signed int value {10};
    signed int value2 {-300};

    std::cout << "value : " << value << std::endl;
    std::cout << "value2 : " << value2 << std::endl;
    std::cout << "sizeof(value) : " << sizeof(value) << std::endl;
    std::cout << "sizeof(value2) : " << sizeof(value2) << std::endl;

    std::cout << "signed int puede almacenar nums desde -2147483648 hasta 2147483647" << std::endl;

    // unsigned modificador, solo positivos (4 bytes)
    std::cout << "----- enteros unsigned -----" << std::endl;
    unsigned int value3 {4};
    // unsigned int value4 {-2}; // unsigned, solo se pueden colocar valores negativos

    std::cout << "value3 : " << value3 << std::endl;
    std::cout << "sizeof(value3) : " << sizeof(value3) << std::endl;
    // std::cout << "value4 : " << value4 << std::endl;
    std::cout << "unsigned int puede almacenar unicamente nums positivos" << std::endl;

    // short (2 bytes)
    std::cout << "----- short -----" << std::endl;
    short int short_var {-32768};
    short int short_int {32767};
    signed short int signed_short {-32768};
    signed short int signed_short_int {32678};
    unsigned short int unsigned_short_int {65535};

    std::cout << "short_var : " << short_var << std::endl;
    std::cout << "sizeof(short_var) : " << sizeof(short_var) << std::endl;
    std::cout << "short_int : " << short_int << std::endl;
    std::cout << "sizeof(short_int) : " << sizeof(short_int) << std::endl;
    std::cout << "Las variables signed short int pueden tomar valores desde -32768 hasta 32767" <<
        "\nMientras que las unsigned short int pueden desde 0 hasta 65535" << std::endl;

    // long (4 byte)
    

    return 0;
}
