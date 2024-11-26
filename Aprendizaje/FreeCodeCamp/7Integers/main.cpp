#include <iostream>

int main(){

    // Inicializacion por corchetes
    std::cout << "---- Inicializacion por corchetes ----" << std::endl;
    // Variable que contiene un valor basura aleatorio. Mala practica
    int elephant_count;

    int lion_count{}; // Inicializa a 0

    int dog_count {10}; // Inicializa a 10
    int cat_count {15}; // Inicializa a 15

    int domestic_animals {dog_count + cat_count}; // Inicializa con una suma de dos variables

    std::cout << "Inicializacion con random garbage value" << elephant_count << std::endl;
    std::cout << "Inicializacion con 0 " << lion_count << std::endl;
    std::cout << "Inicializacion con 10 " << dog_count << std::endl;
    std::cout << "Inicializacion con 15 " << cat_count << std::endl;
    std::cout << "Inicializacion de una suma entre variables " <<  domestic_animals << std::endl;
    std::cout << "Inicializacion de int num {2.5} es error" << std::endl;

    // Inicializacion funcional
    std::cout << "---- Inicializacion funcional ----" << std::endl;

    int apple_count(5);
    int orange_count(10);
    int fruit_count(apple_count + orange_count);
    int conversion_functional(2.9);

    std::cout << "Apple count: " << apple_count << std::endl;
    std::cout << "Orange count: " << orange_count << std::endl;
    std::cout << "Fruit count: " << fruit_count << std::endl;
    std::cout << "Conversion funcional de 2.9: " << conversion_functional << std::endl;

    // Inicializacion por asignacion
    std::cout << "---- Inicializacion por asignacion ----" << std::endl;
    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;
    int conversion_asignacion = 2.9;

    std::cout << "bike count " << bike_count << std::endl;
    std::cout << "truck count " << truck_count << std::endl;
    std::cout << "vehicle count " << vehicle_count << std::endl;
    std::cout << "conversion " << conversion_asignacion << std::endl;

    // Mirar el tamaño con sizeof
    std::cout << "sizeof int : " << sizeof(int) << std::endl;
    std::cout << "size of bike_count : " << sizeof(bike_count) << std::endl;

    return 0;
}
