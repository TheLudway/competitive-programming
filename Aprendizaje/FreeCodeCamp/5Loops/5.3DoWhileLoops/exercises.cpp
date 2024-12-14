#include <iostream>
#include <random>
#include <string>

int main(){


    std::cout << "Suma de los numeros del 1 al 100" << std::endl;
    const int COUNT1 {100};
    size_t i1 {1};
    int r1 {0};

    for(i1 ; i1 <= COUNT1 ; i1++){
        r1 += i1;
    }

    std::cout << "La suma desde " << i1 << " hasta " << COUNT1 << " es " << r1 << std::endl;

    std::cout << "Tabla de multplicacion" << std::endl;
    const int COUNT2 {10};
    size_t i2 {0};
    int n2_1 {};
    std::cout << "De cual numero quiere generar su tabla de multiplicar?" << std::endl;
    std::cin >> n2_1;

    for (i2 ; i2 <= COUNT2 ; i2++){
        std::cout << n2_1 << " X " << i2 << " = " << n2_1*i2 << std::endl;
    }

    std::cout << "Calculadora de factorial" << std::endl;
    size_t i3 {1};
    unsigned int n3_1 {};
    unsigned int r3 {1};

    std::cout << "Escribe el num para sacar el factorial" << std::endl;
    std::cin >> n3_1;

    while (i3 <= n3_1){
        r3 *= i3;
        i3++;
    }
    std::cout << "El factorial de " << n3_1 << " es " << r3 << std::endl;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(1, 100);

    int n4_1 {distrib(gen)};
    int n4_2 {};
    std::cout << "Juego de adividar el num " << std::endl;
    std::cout << "El num es: " << n4_1 << std::endl;

    do {
        std::cout << "Coloca un num" << std::endl;
        std::cin >> n4_2;
        if (n4_1 > n4_2){
            std::cout << "El num es mayor" << std::endl;
        }else if (n4_1 < n4_2) {
            std::cout << "El num es menor" << std::endl;
        }else {
            std::cout << "Adivinaste el num!" << std::endl;
        }
    }while(n4_2 != n4_1);


    for (size_t i {1} ; i <= 50 ; i++){
        if ((i % 3 == 0) & (i % 5 == 0) ){
            std::cout << i << ": FizzBuzz" << std::endl;
        }else if (i % 3 == 0){
            std::cout << i << ": Fizz" << std::endl;
        }else if (i % 5 == 0){
            std::cout << i << ": Buzz" << std::endl;
        }else{
            std::cout << i << std::endl;
        }
    }

    int n {};
    bool val {};

    while (n != 0){
        std::cout << "Ingrese un numero para verificar si es primo" << std::endl;
        std::cin >> n;
        val = true;
        for (int i {2} ; i <= n/2 ; i++){
            if (n % i == 0){
                val = false;
                break;
            }
        }
        if (val){
            std::cout << "Es primo" << std::endl;
        }else{
            std::cout << "No es primo" << std::endl;
        }
    }

    std::cout << "Simulador de ATM" << std::endl;

    int balance {1000};
    std::string opcion {};
    int n10 {};


    while (opcion != "Quit"){
        std::cout << "Qué opción desea escoger? (Depositar, Retirar, Consultar)" << std::endl;
        std::cin >> opcion;

        if (opcion == "Depositar"){
            std::cout << "Ha seleccionado la opción de depositar, ingrese cuánto dinero desea depositar" << std::endl;
            std::cin >> n10;
            balance += n10;
        }else if (opcion == "Retirar"){
            std::cout << "Ha seleccionado la opción de retirar, ingrese cuánto dinero desea retirar. Recuerde tener suficientes fondos" << std::endl;
            std::cin >> n10;
            if (balance >= n10){
                balance -= n10;
            }else {
                std::cout << "No posee suficientes fondos" << std::endl;
            }
        }else if (opcion == "Consultar"){
            std::cout << "Su saldo es de: " << balance << std::endl;
        }
    }



    return 0;
}
