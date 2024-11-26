#include <iostream>
#include <iomanip>

int main(){

    // Declare and initialize the variables
    float number1 {1.1234567890123456789f};
    double number2 {1.12345678901234567890};
    long double number3 {1.1234567890123456789L};

    // Imprimir los sizes
    std::cout << "----- Bytes de los data types -----" << std::endl;
    std::cout << "sizeof float : " << sizeof(float) << std::endl;
    std::cout << "sizeof double : " << sizeof(double) << std::endl;
    std::cout << "sizeof long double : " << sizeof(long double) << std::endl;


    // Precision
    std::cout << "----- Modificar la precision del std::cout -----" << std::endl;
    std::cout << std::setprecision(20);
    std::cout << "number1 : " << number1 << std::endl;
    std::cout << "Se llega hasta una precision de 7 digitos" << std::endl;
    std::cout << "number2 : " << number2 << std::endl;
    std::cout << "Se llega hasta una precision de 15 digitos" << std::endl;
    std::cout << "number3 : " << number3 << std::endl;
    std::cout << "Se alcanza a llegar hasta lo que se coloca en std::setprecision(20)" << std::endl;

    // Errores de flotantes : La precision es limitada
    float number4 {192400023.0f};
    std::cout << number4 << std:: endl;
    std::cout << "El num verdadero es 192400023.0 pero como solo se manejan 7 digitos, entonces los ultimos dos los inventa.\nAhora se va a ver que pasa con el double y el mismo num" << std::endl;
    double number5 {192400023.0};
    std::cout << number5 << std::endl;
    std::cout << "Da el num completo debido a que soporta hasta 15 digito" << std::endl;

    // Notacion cientifica
    std::cout << "----- Notacion cientifica -----" << std::endl;

    double number6 {192400023};
    double number7 {1.92400023e8};
    double number8 {1.924e8};
    double number9 {0.00000000003498};
    double number10 {3.498e-11};

    std::cout << "number6 : " << number6 << std::endl;
    std::cout << "number7 : " << number7 << std::endl;
    std::cout << "number8 : " << number8 << std::endl;
    std::cout << "number9 : " << number9 << std::endl;
    std::cout << "number10 : " << number10 << std::endl;

    std::cout << "----- Infinitos -----" << std::endl;
    double number11 {5.6};
    double number12 {};
    double number13 {};

    double result {number11 / number12};

    std::cout << number11 << "/" << number12 << " yields " << result << std::endl;
    std::cout << result << " + " << number11 << " yields " << result + number11 << std::endl;

    // NaN
    result = number12 / number13;

    std::cout << number12 << "/" << number13 << " = " << result << std::endl;
    std::cout << "sizeof(NaN) : " << sizeof(result) << std::endl;
    std::cout << "sizeof(inf) : " << sizeof(number11/number12) << std::endl;


    return 0;
}
