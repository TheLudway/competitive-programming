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

    return 0;
}
