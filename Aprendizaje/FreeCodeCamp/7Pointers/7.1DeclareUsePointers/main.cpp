#include <iostream>

int main(){


    // Declarar e inicializar punteros
    // int *p_number {}; // Se inicia como nullptr
    // double *p_frantcional_number {};

    // // Inicializar explicitamente con nullptr
    // int *p_number1{nullptr};
    // int *p_fractional_number1{nullptr};

    // // Punteros de diferentes variables son del mismo size
    // std::cout << "sizeof(int) : " << sizeof(int) << std::endl;
    // std::cout << "sizeof(double) : " << sizeof(double) << std::endl;
    // std::cout << "sizeof(double*) : " << sizeof(double*) << std::endl;
    // std::cout << "sizeof(int*) : " << sizeof(int*) << std::endl;
    // std::cout << "sizeof(p_number1) : " << sizeof(p_number1) << std::endl;
    // std::cout << "sizeof(p_fractional_number1) : " << sizeof(p_fractional_number1) << std::endl;

    // int *p_number5{}, other_int_var{};
    // int *p_number6{}, other_int_var2{};

    // std::cout << "sizeof(p_number5) : " << sizeof(p_number5) << "\n";
    // std::cout << "sizeof(other_int_var) : " << sizeof(other_int_var) << "\n";
    // std::cout << "sizeof(p_number6) : " << sizeof(p_number6) << "\n";
    // std::cout << "sizeof(other_int_var2) : " << sizeof(other_int_var2) << "\n";

    // Inicializar punteros y asignarles datos
    int int_var {43};
    int *p_int {&int_var};

    std::cout << "Int var : " << int_var << std::endl;
    std::cout << "p_int (Address in memory) : " << p_int << std::endl;

    int int_var1 {65};
    p_int = &int_var1;
    std::cout << "p_int (with different addess) : " << p_int << std::endl;

    // No se puede asignar punteros entre diferentes variables
    int *p_int1 {nullptr};
    double double_var {33};

    // p_int = &double_var; // Error de compilador

    // Dereferencing a pointer : Read the value that contains that address
    int *p_int2 {nullptr};
    int int_data{56};
    p_int2 = &int_data;

    std::cout << "value : " << *p_int2 << std::endl;



    return 0;
}
