#include <iostream>

int main(){
    double double_value {12.34};

    double& ref_double_value {double_value};

    double* p_double_value {&double_value};

    double other_double_value {100.23};

    // Lectura
    std::cout << "double_value : " << double_value << "\n";
    std::cout << "ref_double_value : " << ref_double_value << "\n";
    std::cout << "p_double_value : " << p_double_value << "\n";
    std::cout << "*p_double_value : " << *p_double_value << "\n";

    // Escritura a traves de puntero
    std::cout << "\n";
    std::cout << "Escribir a traves de un puntero : \n";

    *p_double_value = 15.44;

    std::cout << "double_value : " << double_value << "\n";
    std::cout << "ref_double_value : " << ref_double_value << "\n";
    std::cout << "p_double_value : " << p_double_value << "\n";
    std::cout << "*p_double_value : " << *p_double_value << "\n";

    // Escritura a partir de una referencia
    std::cout << "\n";
    std::cout << "Escribir a traves de una referencia : \n";

    ref_double_value = 18.44;

    std::cout << "double_value : " << double_value << "\n";
    std::cout << "ref_double_value : " << ref_double_value << "\n";
    std::cout << "p_double_value : " << p_double_value << "\n";
    std::cout << "*p_double_value : " << *p_double_value << "\n";

    ref_double_value = other_double_value;
    std::cout << "double_value : " << double_value << "\n";
    std::cout << "ref_double_value : " << ref_double_value << "\n";

    ref_double_value = 333.33;
    std::cout << "double_value : " << double_value << "\n";
    std::cout << "ref_double_value : " << ref_double_value << "\n";


    return 0;
}
