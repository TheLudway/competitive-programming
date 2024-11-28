#include <iostream>

int multiply(int n1, int n2){
    return n1 * n2;
}


int main(){
    int n1;
    int n2;

    n1 = 20;
    n2 = 2;

    std::cout << "Primer num: " << n1 << std::endl;
    std::cout << "Segundo num: " << n2 << std::endl;

    std::cout << "Multiplicación de ambos num " << multiply(n1, n2) << std::endl;

    return 0;
}
