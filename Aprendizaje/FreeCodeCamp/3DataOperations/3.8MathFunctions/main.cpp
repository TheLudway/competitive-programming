#include <iostream>
#include <math.h>

int main(){
    
    double weight {7.7};

    // floor
    std::cout << "Weight rounded to floor is : " << std::floor(weight) << std::endl;

    // ceil
    std::cout << "Weight rounded to ceil is : " << std::ceil(weight) << std::endl;

    // abs
    double savings {-5000};
    weight = 7.7;
    std::cout << "Abs of weight is : " << std::abs(weight) << std::endl;
    std::cout << "Abs of savings is : " << std::abs(savings) << std::endl;

    // exp : f(x) = e^x, donde e=2.71828
    double exponential = std::exp(10);
    std::cout << "El exponencial de 10 es : " << exponential << std::endl;

    // pow
    std::cout << "3 ^ 4 es : " << std::pow(3, 4) << std::endl;
    std::cout << "9 ^ 3 es : " << std::pow(9, 3) << std::endl;

    // Logaritmos
    std::cout << "Log ; to get 54.59, you would elevate e to the power of : " << std::log(54.59) << std::endl;

    // log10,
    std::cout << "To get 1000,, you'd need to elevate 10 to the power of : " << std::log10(10000) << std::endl;

    // sqrt
    std::cout << "La raiz cuadrada de 81 es : " << std::sqrt(81) << std::endl;

    // round
    std::cout << "3.654 es redondeado a : " << std::round(3.654) << std::endl;
    std::cout << "2.5 es redondeado a : " << std::round(2.5) << std::endl;
    std::cout << "2.4 es redondeado a : " << std::round(2.4) << std::endl;


    return 0;
}
