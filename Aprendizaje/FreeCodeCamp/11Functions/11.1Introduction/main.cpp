#include <iostream>
#include <string>
#define endl "\n"

void say_hello(){
    std::cout << "Hola" << endl;
    return;
}


int min(int a, int b){
    if (a < b) {
        return a;
    }else{
        return b;
    }
}


int max(int a, int b){
    if (a > b){
        return a;
    }else{
        return b;
    }
}

void enter_bar(int age){
    if (age > 18){
        std::cout << "Tienes " << age << " años. Por favor, continue." << endl;
    }else{
        std::cout << "Lo siento, eres muy joven para esto." << endl;
    }
}

double lucky_number(){
    return 2.7183;
}


double increment_multiply(double a, double b){
    std::cout << "Dentro de una funcion, antes de incrementar : " << endl;
    std::cout << "a : " << a << endl;
    std::cout << "b : " << b << endl;

    double result = ((++a) * (++b));

    std::cout << "Dentro de una funcion, despues de incrementar : " << endl;
    std::cout << "a : " << a << endl;
    std::cout << "b : " << b << endl;

    return result;

}

int main(int argc, char **argv){
    int a_value {14};
    int b_value {10};

    int a{33};
    int b{41};


    std::cout << "Llamando la funcion enter_bar: " << endl;
    enter_bar(22);

    int maximum_number {max(a_value, b_value)};

    std::cout << "max(" << a_value << "," << b_value << ") : " << maximum_number << endl;

    std::cout << "max(" << a << "," << b << ") : " << max(a, b) << endl;

    std::cout << "Llamando la funcion say_hello : " << endl;
    say_hello();

    std::cout << "Tu numero de la suerte es : " << lucky_number() << endl;
    a = 100;
    b = 200;

    std::cout << "max(" << a << "," << b << ") : " << max(a, b) << endl;
    std::cout << "max(" << 500 << "," << 303 << ") : " << max(500, 303) << endl;

    char d {55};
    char e {51};

    double f {12.33};
    double g {51.25};

    std::cout << endl;
    std::cout << "Llamando la funcion min con argumentos tipo char : " << endl;

    int minimun_number {min(d, e)};
    std::cout << "min(" << static_cast<int>(d) << "," << static_cast<int>(e) << ") : "
        << minimun_number << endl;

    std::cout << endl;
    std::cout << "Llamando una funcion con argumentos double : " << endl;

    minimun_number = min(f, g);
    std::cout << "min(" << f << "," << g << ") : " << minimun_number << endl;

    std::cout << endl;
    std::cout << "argument scope : COPIES " << endl;
    double h {3.00};
    double i {4.00};

    std::cout << "Fuera de la funcion, antes de incrementar : " << endl;
    std::cout << "h : " << h << endl;
    std::cout << "i : " << i << endl;

    double incr_mult_result = increment_multiply(h, i);

    std::cout << "Fuera de la funcion, despues de incrementar : " << endl;
    std::cout << "h : " << h << endl;
    std::cout << "i : " << i << endl;

    for (size_t i {1}; i <= 20 ; i ++){
        enter_bar(i);
    }

    return 0;
}
