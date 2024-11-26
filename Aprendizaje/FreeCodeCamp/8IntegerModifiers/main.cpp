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
    std::cout << "signed_short : " << signed_short << std::endl;
    std::cout << "sizeof(signed_short) : " << sizeof(signed_short) << std::endl;
    std::cout << "signed_short_int : " << signed_short_int << std::endl;
    std::cout << "sizeof(signed_short_int) : " << sizeof(signed_short_int) << std::endl;
    std::cout << "unsigned_short_int : " << unsigned_short_int << std::endl;
    std::cout << "sizeof(unsigned_short_int) : " << sizeof(unsigned_short_int) << std::endl;
    std::cout << "Las variables signed short int pueden tomar valores desde -32768 hasta 32767" <<
        "\nMientras que las unsigned short int pueden desde 0 hasta 65535" << std::endl;

    // long (4 o 8 byte)
    std::cout << "----- signed long data type (4 o 8 bytes) -----" << std::endl;
    long long_var {88};
    std::cout << "long_var : " << long_var << std::endl;
    std::cout << "sizeof(long_var) : " << sizeof(long_var) << std::endl;
    long int long_int {33};
    std::cout << "long_int : " << long_int << std::endl <<
        "sizeof(long_int) : " << sizeof(long_int) << std::endl;
    signed long int signed_long_int {44};
    std::cout << "signed_long_int : " << signed_long_int << std::endl <<
        "sizeof(signed_long_int) : " << sizeof(signed_long_int) << std::endl;
    std::cout << "long int y signed long int puede tomar nums desde -2^31 hasta 2^31 - 1" << std::endl;
    
    std::cout << "----- unsigned long data types (4 o 8 bytes) -----" << std::endl;
    unsigned long int unsigned_long_int {1005};
    std::cout << "unsigned_long_int : " << unsigned_long_int << std::endl <<
        "sizeof(unsigned_long_int) : " << sizeof(unsigned_long_int) << std::endl;

    std::cout << "----- signed long long (8 bytes) -----" << std::endl;
    signed long long int signed_long_long_int {90};
    std::cout << "signed_long_long_int : " << signed_long_long_int << std::endl <<
        "sizeof(signed_long_long_int) : " << sizeof(signed_long_long_int) << std::endl;
    unsigned long long int unsigned_long_long_int {20};
    std::cout << "unsigned_long_long_int : " << unsigned_long_long_int << std::endl <<
        "sizeof(unsigned_long_long_int) : " << sizeof(unsigned_long_long_int) << std::endl <<
        "El signed long long toma 8 bytes y puede tomar valores desde -2^63 hasta 2^63 - 1" <<
        "\nMientras que el unsigned long long toma 8 bytes y valores positivos hasta 2^64 - 1" << std::endl;

    return 0;
}
