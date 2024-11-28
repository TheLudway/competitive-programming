#include <iostream>
#include <string>



int main(){

    char character1 {'a'};
    char character2 {'r'};
    char character3 {'r'};
    char character4 {'o'};
    char character5 {'w'};

    std::string cadena {"Holi"};

    char value {65};
    char value2 = 65;

    std::cout << "value : " << value << std::endl;
    std::cout << "value(int) : " << static_cast<int>(value) << std::endl;

    std::cout << "value2 : " << value2 << std::endl;
    std::cout << "value2(int) : " << static_cast<int>(value2)  << std::endl;

    std::cout << character1 << std::endl;
    std::cout << character2 << std::endl;
    std::cout << character3 << std::endl;
    std::cout << character4 << std::endl;
    std::cout << character5 << std::endl;
    std::cout << "sizeof(char) : " << sizeof(char) << std::endl;
    std::cout << "sizeof(std::string) : " << sizeof(std::string) << std::endl;

    return 0;
}
