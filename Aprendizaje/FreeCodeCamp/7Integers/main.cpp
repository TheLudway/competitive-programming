#include <iostream>

int main(){
    // Inicializacion funcional
    int age(5.2);
    std::cout << "Inicializacion funcional" << std::endl;
    std::cout << age << std::endl;

    // Inicializacion por corchetes
    int age2{5.2};
    std::cout << "Inicializacion por corchetes" << std::endl;
    std::cout << age2 << std::endl;

    // Inicializacion por asignacion

    return 0;
}
