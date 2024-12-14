#include <iostream>

int main(){

    const int COUNT {0};
    size_t i {0}; // Iterador

    do{
        std::cout << i << " : Amo C++" << std::endl;

        i++; // Incremento
    }while (i < COUNT);



    return 0;
}
