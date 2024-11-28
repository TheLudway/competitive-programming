#include <iostream>

int main() {
    /*
     *  Operaciones con sumar, restrar, dividir, modulo y multiplicar
     */

    // Suma
    int number1 {2};
    int number2 {7};

    int result {number1 + number2};
    std::cout << "Suma : " << result << std::endl;

    // Resta
    result = number2 - number1;
    std::cout << "Resta : " << result << std::endl;

    // Resta negativa
    result = number1 - number2;
    std::cout << "Resta negativa: " << result << std::endl;

    // Multiplicacion
    result = number2 * number1;
    std::cout << "Multiplicacion: " << result << std::endl;

    // Division
    result = number2 / number1;
    std::cout << "Dividision entera: " << result << std::endl;

    // Modulo
    result = number2 % number1;
    std::cout << "Modulo: " << result << std::endl;



    return 0;
}
