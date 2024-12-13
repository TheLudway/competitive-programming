#include <iostream>
#include <string>


int main(){
    int max{};
    int a {35};
    int b {20};

    if (a > b){
        max =a;
    }else {
        max = b;
    }

    max = (a > b) ? a : b;

    std::cout << "max: " << max << std::endl;

    // Inicializacion ternary
    std::cout << std::endl;
    std::cout << "speed" << std::endl;

    bool fast = false;

    int speed { fast ? 300 : 150};
    std::cout << "La velocidad es : " << speed << std::endl;

    std::cout << "Programa para ver si un numero es par o impar" << std::endl;
    int n1_1 {};
    std::string r1 {};

    std::cout << "Escribe un num: " << std::endl;
    std::cin >> n1_1;
    r1 = (n1_1 % 2 == 0) ? "Even" : "Odd";
    std::cout << r1 << std::endl;

    std::cout << "Programa para encontrar el maximo de dus numeros" << std::endl;
    int n2_1 {};
    int n2_2 {};
    int r2 {};

    std::cout << "Escribe dos nums separados por espacio: " << std::endl;
    std::cin >> n2_1 >> n2_2;

    r2 = (n2_1 > n2_2) ? n2_1 : n2_2;
    std::cout << "El max entre " << n2_1 << " y " << n2_2 << " es " << r2 << std::endl;

    std::cout << "Evaluacion de notas" << std::endl;
    int n3_1 {};
    std::string r3 {};
    std::cout << "Escribe tu nota en un rango de 0 a 100" << std::endl;
    std::cin >> n3_1;
    r3 = (n3_1 > 100)
        ? "Formato incorrecto"
        : (n3_1 >= 50)
        ? "Pass"
        : "Fail";

    std::cout << "De acuerdo a tu nota, entonces: " << r3 << std::endl;

    std::cout << "Programa para saber si un año es bisiesto" << std::endl;
    int n4_1 {};
    std::string r4 {};
    std::cout << "Coloca el año que deseas consultar : " ;
    std::cin >> n4_1;
    r4 = ((n4_1 % 4 == 0 && n4_1 % 100 != 0) || (n4_1 % 400 == 0)) ? "Año bisiesto" : "Año no bisiesto";
    std::cout << "El año " << n4_1 << " es " << r4 << std::endl;

    std::cout << "Programa para calcular el valor absoluto de un entero" << std::endl;
    int n5_1 {};
    int r5 {};
    std::cout << "Coloca un numero entero" << std::endl;
    std::cin >> n5_1;

    r5 = (n5_1 >= 0) ? n5_1 : n5_1*-1;
    std::cout << r5 << std::endl;

    std::cout << "Programa para ver si un numero es divisible por otro" << std::endl;
    int n6_1 {};
    int n6_2 {};
    std::string r6 {};

    std::cout << "Escribe dos numeros separados por espacio:" << std::endl;
    std::cin >> n6_1 >> n6_2;

    r6 = (n6_1 % n6_2 == 0) ? "Divisible": "No Divisible";
    std::cout << "Los numeros " << n6_1 << " y " << n6_2 << " son " << r6 << std::endl;

    std::cout << "Positivo, negativo o cero" << std::endl;
    int n7_1 {};
    std::string r7 {};

    std::cout << "Escribe un num: ";
    std::cin >> n7_1;

    r7 = (n7_1 > 0)
        ? "Positivo"
        : (n7_1 < 0)
        ? "Negativo"
        : "Cero";
    std::cout << "El numero " << n7_1 << " es " << r7 << std::endl;

    std::cout << "El mas peque de tres nums" << std::endl;
    int n8_1 {};
    int n8_2 {};
    int n8_3 {};
    int r8 {};

    std::cout << "Escribe tres nums separados por espacios" << std::endl;
    std::cin >> n8_1 >> n8_2 >> n8_3;

    r8 = (n8_1 < n8_2 & n8_1 < n8_3)
        ? n8_1
        : (n8_2 < n8_1 & n8_2 < n8_3)
        ? n8_2
        : n8_3;
    std::cout << r8 << std::endl;

    std::cout << "Eligibilidad para votar"  << std::endl;
    int n9_1 {};
    std::string r9 {};

    std::cout << "Escribe tu edad:" << std::endl;
    std::cin >> n9_1;

    r9 = (n9_1 >= 18)
        ? "Elegible"
        : "No elegible";
    std::cout << "Con tu edad eres " << r9 << std::endl;

    std::cout << "Clasificador de temperatura " << std::endl;
    int n10_1 {};
    std::string r10 {};

    std::cout << "Coloca una temperatura:" << std::endl;
    std::cin >> n10_1;

    r10 = (n10_1 > 30)
        ? "Hot"
        : (n10_1 < 15)
        ? "Cold"
        : "Moderate";
    std::cout << "La temperatura es " << r10 << std::endl;


    return 0;
}
