#include <iostream>

int main(){

    // for (unsigned int i {0} ; i < 10 ; i++){
    //     std::cout << i << " : Amo C++" << std::endl;
    // }

    // Usar size_t como una representacion de unsigned int

    for (size_t i {0} ; i < 10 ; i++) {
        std::cout << i << " : Amo C++" << std::endl;
    }

    std::cout << "sizeof(size_t) : " << sizeof(size_t) << std::endl;



    // Alcance del iterador
    size_t i {0}; // Iterador definido afuera

    for (i ; i < 10 ; i++) {
        std::cout << i << " : Amo C++" << std::endl;
    }

    std::cout << "i : " << i << std::endl;

    // Dejar fuera el iterador y la parte de declaracion
    size_t j {0};

    for ( ; j < 10 ; j++ ){
        std::cout << j << " : Amo C++" << std::endl;
    }

    const size_t COUNT {10};

    for (size_t i ; i < COUNT ; i++){
        std::cout << i << " : Amo C++" << std::endl;
    }


    return 0;
}
