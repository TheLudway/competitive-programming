#include <iostream>
#define endl "\n"


// Declaracion de funciones o prototipo.
int max(int a, int b);
int min(int a, int b);
double incr_mult(int a, int b);

int main(){

    int a { 3};
    int b {4};

    std::cout << "max(" << a << "," << b << ") : " << max(a, b) << endl;
    std::cout << "min(" << a << "," << b << ") : " << min(a, b) << endl;
    std::cout << "incr_mult(" << a << "," << b << ") : " << incr_mult(a, b) << endl;

    return 0;
}


// Definicion de las funciones
int max(int a, int b){
    if (a > b){
        return a;
    }else{
        return b;
    }

}

int min(int a, int b){
    if (a < b ){
        return a;
    }else{
        return b;
    }
}

double incr_mult(int a, int b){
    std::cout << "Dentro de una funcion, antes de incremenar : "<< endl;
    std::cout << "a : " << a << endl;
    std::cout << "b : " << b << endl;

    double result = ((++a) * (++b));

    std::cout << "Dentro de una funcion, despues de incrementar : "<< endl;
    std::cout << "a : " << a << endl;
    std::cout << "b : " << b << endl;
    return result;
}
