#include <iostream>


int main(){

    long double base;
    long double altura;
    long double resultado;

    std::cout << "Ingrese la base del rectangulo: ";
    std::cin >> base;

    std::cout << "Ingrese la altura del rectangulo: ";
    std::cin >> altura;


    resultado = base*altura;
    std::cout << "El area del rectangulo es: " << resultado << std::endl;



    return 0;
}
