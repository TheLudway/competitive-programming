#include <iostream>

int main(){

    int int_value {45};
    double double_value {33.65};

    int& reference_to_int_value1{int_value};
    int& reference_to_int_value2 = int_value;
    double& reference_to_double_value1 {double_value};

    // Se tiene que declarar e inicializar de una vez
    // int& some_reference; // Error

    std::cout << "int_value : " << int_value << "\n";
    std::cout << "double_value : " << double_value << "\n";
    std::cout << "reference_to_int_value1 : " << reference_to_int_value1 << "\n";
    std::cout << "reference_to_int_value2 : " << reference_to_int_value2 << "\n";
    std::cout << "reference_to_double_value1 : " << reference_to_double_value1 << "\n";
    std::cout << "&int_value : " << &int_value << "\n";
    std::cout << "&double_value : " << &double_value << "\n";
    std::cout << "&reference_to_int_value1 : " << &reference_to_int_value1 << "\n";
    std::cout << "&reference_to_int_value2 : " << &reference_to_int_value2 << "\n";
    std::cout << "&reference_to_double_value1 : " << &reference_to_double_value1 << "\n";
    std::cout << "sizeof(int) : " << sizeof(int) << "\n";
    std::cout << "sizeof(int&) : " << sizeof(int&) << "\n";
    std::cout << "sizeof(reference_to_int_value1) : " << sizeof(reference_to_int_value1) << "\n";
    std::cout << "sizeof(double) : " << sizeof(double) << "\n";
    std::cout << "sizeof(double&) : " << sizeof(double&) << "\n";
    std::cout << "sizeof(reference_to_double_value1) : " << sizeof(reference_to_double_value1) << "\n";

    return 0;
}
