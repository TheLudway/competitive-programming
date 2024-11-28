#include <iostream>

int main(){

    float celsius;
    float fahrenheit;

    std::cout << "----- Programa de conversion de Celsius a Fahrenheit" << std::endl;
    std::cout << "Ingrese su temperatura en Fahrenheit" << std::endl;

    std::cin >> celsius;

    fahrenheit = (celsius * (9.0f/5.0f)) + 32;
    std::cout << "La temperatura en Fahrenheit es: " << fahrenheit << std::endl;


    return 0;
}
