#include <iostream>


int main(){
    char value {65};
    char value2 = 65;

    std::cout << "value : " << value << std::endl;
    std::cout << "value(int) : " << static_cast<int>(value) << std::endl;

    std::cout << "value2 : " << value2 << std::endl;
    std::cout << "value2(int) : " << static_cast<int>(value2)  << std::endl;



    return 0;
}
