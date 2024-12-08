#include <iostream>

int main() {

    int number1 {55};
    int number2 {60};

    bool result = (number1 < number2);
    std::cout << std::boolalpha << "result : " << result << std::endl;

    std::cout << std::endl;
    std::cout << "libre declaracion if" << std::endl;

    // if(result){
    if(result == true){
        std::cout << number1 << " es menor que " << number2 << std::endl;
    }

    // if(!result){
    if(!(result == true)){
        std::cout << number1 << " no es menor que " << number2 << std::endl;
    }

    // Usando else
    std::cout << std::endl;
    std::cout << "Usando la clausula else : " << std::endl;

    if(result == true){
        std::cout << number1 << " es menor que " << number2 << std::endl;
    }else{
        std::cout << number1 << " no es menor que " << number2 << std::endl;
    }

    // Usando la expresion directamente
    std::cout << std::endl;
    std::cout << "Usando la expresion como condicion : " << std::endl;

    if(number1 < number2){
        std::cout << number1 << " es menor que " << number2 << std::endl;
    }else{
        std::cout << number1 << " no es menor que " << number2 << std::endl;
    }

    // Sin anidar
    std::cout << std::endl;
    bool red = false;
    bool green {true};
    bool yellow {false};
    bool police_stop {true};

    if(red){
        std::cout << "Stop" << std::endl;
    }
    if(yellow){
        std::cout << "Slow Down" << std::endl;
    }
    if(green){
        std::cout << "Go" << std::endl;
    }

    // Anidando
    std::cout << std::endl;
    std::cout << "Police officer stops (verbose)" << std::endl;
    if(green){
        if(police_stop){
            std::cout << "Stop" << std::endl;
        }
        else{
            std::cout << "Go" << std::endl;
        }
    }

    // Alternativa a anidar
    std::cout << std::endl;
    std::cout << "Police officer stops (less verbose)" << std::endl;
    if(green && !police_stop){
        std::cout << "Go" << std::endl;
    }else {
        std::cout << "Stop" << std::endl;
    }


    return 0;
}
