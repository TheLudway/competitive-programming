#include <iostream>

int main(){

    int num;
    int numincre;
    int numdecre;

    std::cout << "Escriba un numero para incrementar y decrementar: ";
    std::cin >> num;

    numincre = num + 1;
    numdecre = num - 1;

    std::cout << "Incrementado: " << numincre << std::endl;
    std::cout << "Decrementado: " << numdecre << std::endl;


    return 0;
}
