#include <iostream>
#include <string>

auto main(int argc, char *argv[]) -> int {
    int age;
    std::string name;


    // std::cout << "Hola mundo!" << std::endl;

    // // Imprimir cosas en consola
    // std::cout << "El numero es: " << 12 << std::endl;

    // int age {21};
    // std::cout << "La edad es: " << age << std::endl;

    // // Imprimir mensajes de error en consola
    // std::cerr << "std::cerr output : Algo sucedio y cago" << std::endl;

    // Imprimir mensajes de log en consola
    // std::clog << "std::clog output : Este es un mensaje log" << std::endl;

    // std::cout << "Por favor, ingrese su nombre:" << std::endl;
    // std::cin >> name;

    // std::cout << "Por favor, indique su edad:" << std::endl;
    // std::cin >> age;

    // std::cout << "Hola " << name << " Tu edad es " << age << std::endl;

    // std::cout << "Por favor, ingrese su nombre y su nombre y edad, separados por espacios: " << std::endl;
    // std::cin >> name >> age;
    // std::cout << "Hola, " << name << " tu edad es de: " << age << std::endl;

    std::cout << "Por favor, escriba su nombre completo: " << std::endl;
    std::getline(std::cin, name);

    std::cout << "Ingrese su edad: " << std::endl;
    std::cin >> age;
    std::cout << "Hola, " << name << " tu edad es de " << age << std::endl;

    return 0;
}
