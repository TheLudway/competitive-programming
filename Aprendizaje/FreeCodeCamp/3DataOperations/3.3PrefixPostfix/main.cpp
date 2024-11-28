#include <iostream>

int main(){

    int value {5};


    std::cout << "-------- Incremento y decremento rustico --------" << std::endl;
    value = value + 1;
    std::cout << "El valor es : " << value << std::endl;

    value = 5;
    value = value - 1;
    std::cout << "El valor es: " << value << std::endl;

    std::cout << "-------- Incremento y decremento con postfix --------"  << std::endl;

    value = 5;
    std::cout << "El valor es (incrementando) : " << value++ << std::endl;
    std::cout << "El valor es: " << value << std::endl;

    value = 5;
    std::cout << "El valor es decrementando: " << value-- << std::endl;
    std::cout << "El valor es: " << value << std::endl;

    std::cout << "-------- Incremento y decremento refijo --------" << std::endl;

    value = 5;
    ++value;
    std::cout << "El valor es (prefijo): " << value << std::endl;

    value = 5;
    std::cout << "El valor es (prefijo en el lugar): " << ++value << std::endl;

    value = 5;
    --value;
    std::cout << "El valor es (prefijo): " << value << std::endl;

    value = 5;
    std::cout << "El valor es (prefijo en el lugar): " << --value << std::endl;

    int value2 {45};

    std::cout << "El valor es: " << value2 << std::endl;

    std::cout << std::endl;
    value2 += 5; // Equivalente a value = value + 5
    std::cout << "El valor es (despues += 5) : " << value2 << std::endl;

    std::cout << std::endl;
    value2 -= 5; // Equivalente a value = value - 5
    std::cout << "El valor es (despues -= 5): " << value2 << std::endl;

    std::cout << std::endl;
    value2 *= 2; //  Equivalente a value = value * 2
    std::cout << "El valor es (despues *= 2): " << value2 << std::endl;

    std::cout << std::endl;
    value2 /= 3;
    std::cout << "El valor es (despues /= 3): " << value2 << std::endl;

    std::cout << std::endl;
    value2 %= 11;
    std::cout << "El valor es (despues %= 11): " << value2 << std::endl;



    return 0;
}
