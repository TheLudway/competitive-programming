#include <iostream>


int main(){
    int num;
    int cuadrado;
    int cubo;


    std::cout << "Programa para la potencia al cuadrado y cubo de un numero" << std::endl;
    std::cout << "Ingrese un numero entero" << std::endl;
    std::cin >> num;

    cuadrado = num * num;
    cubo = num * num * num;

    std::cout << "El cuadrado es: " << cuadrado << std::endl;
    std::cout << "El cubo es: " << cubo << std::endl;
    std::cout << "Direccion en memoria: " << &num << std::endl;


    return 0;
}
