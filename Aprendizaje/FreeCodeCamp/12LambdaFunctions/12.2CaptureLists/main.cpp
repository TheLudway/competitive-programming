#include <bits/stdc++.h>

#define endl "\n"



int main (){
    double a {10};
    double b {20};

    /**
     * Permite meter las variables globales para ser usadas en la funcion lambda
     */


    auto func = [a, b](){
        std::cout << "a + b : " << a + b << endl;
    };

    func();


    /**
     * Aqui la funcion lambda obtiene una copia de la variable c y se queda con
     * ese valor (42). En el for loop la variable c va incrementando y lo que se
     * esperaria es que cuando se llame a func2, la variable c aumente, pero no,
     * no es el caso, esto debido a que func2 es quedo con una copia de c al
     * principio.
     */


    int c {42};

    auto func2 = [c](){
        std::cout << "Inner value : " << c << endl;
    };

    for(size_t i {} ; i < 5 ; ++i){
        std::cout << "Outer value : " << c << endl;
        func2();
        ++c;
    }

    /**
     * Capturar variable por referencia.
     * En este caso, si funciona incrementar dentro del for loop a la variable d
     * que se mete en la funcion lambda. Interesante!
     */

    int d {42};

    auto func3 = [&d](){
        std::cout << "Inner value : " << d << endl;
    };

    for (size_t i {} ; i < 5; ++i){
        std::cout << "Outer value : " << d << endl;
        func3();
        ++d;
    }

    
    /**
     * Capturar todo por valores.
     * La sintaxis es poner un = en la capture list y listop, ya se pueden utilizar
     * dentro de la funcion lambda, todas las variables globales declaradas.
     * Esto teniendo en cuenta que son copias de los valores de las variables.
     */

    int e {45};

    auto func4 = [=](){
        std::cout << "Inner value : " << e << endl;
    };

    for (size_t i {}; i < 5 ; ++i ){
        std::cout << "Outer value : " << e << endl;
        func4();
        ++e;
    }

    /**
     * Capturar todo por referencia.
     * Si se desean realizar modificaciones a las variables globales dentro de lo
     * que se hace en las funciones lambda, entonces es suficente utilizar un
     * ampersand, y listop, se puede utilizar y tener valores actualizados de las
     * variables.
     */
    int f {42};
    double g {12.1};

    auto func5 = [&](){
        std::cout << "Inner value f : " << f << endl;
        std::cout << "Inner value g : " << g << endl;
    };

    for (size_t i{}; i < 5; ++i){
        std::cout << "Outer value f : " << f << endl;
        std::cout << "Outer value g : " << g << endl;
        func5();
        ++f;
        g += 0.5;
    }


    return 0;
}
