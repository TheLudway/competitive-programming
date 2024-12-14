#include <iostream>
#include <random>

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



    




    return 0;
}
