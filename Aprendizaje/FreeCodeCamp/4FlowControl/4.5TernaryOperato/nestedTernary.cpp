#include <iostream>
#include <string>

int main(){

    /*
     * Mayor de tres nums
    */

    std::cout << "Encontrar el mayor de tres numeros" << std::endl;
    int n1_1 {};
    int n1_2 {};
    int n1_3 {};
    int r1 {};

    std::cout << "Digita tres numeros separados por espacio" << std::endl;
    std::cin >> n1_1 >> n1_2 >> n1_3;

    r1 = (n1_1 > n1_2 & n1_1 > n1_3)
        ? n1_1
        : (n1_2 > n1_1 & n1_2 > n1_3)
        ? n1_2
        : n1_3;

    std::cout << "El mayor de los numeros " << n1_1 << ", " << n1_2 << " y " << n1_3 << " es " << r1 << std::endl;

    /*
     *  El tipo de triangulo
     */
    std::cout << "Determinar el tipo de triangulo" << std::endl;
    int n2_1 {};
    int n2_2 {};
    int n2_3 {};
    std::string r2 {};

    std::cout << "Escribir la magnitud de los lados de un triangulo" << std::endl;
    std::cin >> n2_1 >> n2_2 >> n2_3;

    r2 = (n2_1 == n2_2 & n2_2 == n2_3)
        ? "Equilatero"
        : (n2_1 == n2_2 | n2_2 == n2_3 | n2_2 == n2_3)
        ? "Isosceles"
        : "Escaleno";
    std::cout << "Es un triangulo " << r2 << std::endl;


    /*
     *  Sistema de notas
     *  */

    std::cout << "Sistema de notas" << std::endl;
    int n3_1 {};
    std::string r3 {};

    std::cout << "Digita la nota que sacaste" << std::endl;
    std::cin >> n3_1;

    r3 = (n3_1 >= 90)
        ? "A"
        : (n3_1 >= 80)
        ? "B"
        : (n3_1 >= 70)
        ? "C"
        : (n3_1 >= 60)
        ? "D"
        : "F";

    std::cout << "La nota " << n3_1 << " es equivalente a " << r3 << std::endl;

    /*
     *  Clasificacion de numeros
     *  */

    std::cout << "Clasificacion de numeros" << std::endl;
    int n4_1 {};
    std::string r4 {};

    std::cout << "Digita un numero" << std::endl;
    std::cin >> n4_1;

    r4 = ((n4_1 > 0) & (n4_1 % 2 == 0) )
        ? "Positivo par"
        : ((n4_1 > 0) & (n4_1 % 2 != 0))
        ? "Positivo impar"
        : ((n4_1 < 0) & (n4_1 % 2 == 0))
        ? "Negativo par"
        : ((n4_1 < 0) & (n4_1 % 2 != 0))
        ? "Negativo impar"
        : "Cero";

    std::cout << "El numero " << n4_1 << " es " << r4 << std::endl;

    /*
     *  Comprobar multiplos
     *  */
    std::cout << "Comprobar multiplos" << std::endl;
    int n5_1 {};
    std::string r5 {};

    std::cout << "Digite un numero ";
    std::cin >> n5_1;

    r5 = ((n5_1 % 3 == 0) & (n5_1 % 5 == 0) )
        ? "Multiplo de ambos"
        : (n5_1 % 3 == 0)
        ? "Multiplo de 3"
        : (n5_1 & 5 == 0)
        ? "Multiplo de 5"
        : "No es un multiplo";

    std::cout << "El numero " << n5_1 << " es " << r5 << std::endl;

    /*
     *  El maximo de 4 numeros
     *  */

    std::cout << "El max de 4 nums" << std::endl;
    int n6_1 {};
    int n6_2 {};
    int n6_3 {};
    int n6_4 {};
    int r6 {};

    std::cout << "Escribe cuatro numeros separados por espacios" << std::endl;
    std::cin >> n6_1 >> n6_2 >> n6_3 >> n6_4;

    r6 = (n6_1 > n6_2 & n6_1 > n6_3 & n6_1 > n6_4)
        ? n6_1
        : (n6_2 > n6_1 & n6_2 > n6_3 & n6_2 > n6_4)
        ? n6_2
        : (n6_3 > n6_1 & n6_3 > n6_2 & n6_3 > n6_4)
        ? n6_3
        : n6_4;

    std::cout << "El mayor de los numeros " << n6_1 << ", " << n6_2 << ", " <<
        n6_3 << " y " << n6_4 << " es " << r6 << std::endl;

    /*
     *  Dias del mes
     *  */
    std::cout << "Dias del mes" << std::endl;
    int n7_1 {};
    int r7 {};

    std::cout << "Ingrese un mes del 1 al 12" << std::endl;
    std::cin >> n7_1;


    r7 = (n7_1 == 1 | n7_1 == 3 | n7_1 == 5 | n7_1 == 7 | n7_1 == 8 | n7_1 == 10 | n7_1 == 12)
        ? 31
        : (n7_1 == 4 | n7_1 == 6 | n7_1 == 9 | n7_1 == 11)
        ? 30
        : 28;

    std::cout << "El mes " << n7_1 << " tiene " << r7 << " dias." << std::endl;


     // *  Advertencia de temperatura


    std::cout << "Advertencia de temperatura" << std::endl;
    int n8_1 {};
    std::string r8 {};

    std::cout << "Digite la temperatura que esta recibiendo" << std::endl;
    std::cin >> n8_1;

    r8 = (n8_1 < 5)
        ? "Muy frio"
        : (n8_1 < 15)
        ? "Frio"
        : (n8_1 < 25)
        ? "Calentito"
        : "Caliente";

    std::cout << "El estado es " << r8 << std::endl;


     // * Clasificacion de año bisiesto

    std::cout << "Clasificacion de año bisiesto" << std::endl;
    int n9_1 {};
    std::string r9 {};

    std::cout << "Digite un año" << std::endl;
    std::cin >> n9_1;

    r9 = (n9_1 % 100 == 0)
        ? "Año bisiesto y divisible por 100"
        : ((n9_1 % 4 == 0) | (n9_1 % 400 == 0))
        ? "Año bisiesto"
        : "No es un año bisiesto";

    std::cout << "El año " << n9_1 << " es " << r9 << std::endl;

    /*
     * Tiempo del dia
     */

    std::cout << "Tiempo del dia" << std::endl;
    int n10_1 {};
    std::string r10 {};

    std::cout << "Digite la hora" << std::endl;
    std::cin >> n10_1;

    r10 = (n10_1 >= 5 & n10_1 < 12)
        ? "Mañana"
        : (n10_1 >= 12 & n10_1 < 17)
        ? "Tarde"
        : (n10_1 >= 17 & n10_1 < 21)
        ? "Noche"
        : "Que se nos va";

    std::cout << "Es " << r10 << std::endl;


    return 0;
}
