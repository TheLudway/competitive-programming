#include <iostream>

int main(){
    int scores[] {10, 12, 15, 11, 18, 17, 22, 23, 24};
    size_t n {std::size(scores)};

    // Utilizando std::size
    std::cout << "Tamaño lista : " << std::size(scores) << std::endl;

    // Imprimir los datos
    for (size_t i {0} ; i < n ; i++){
        std::cout << "Scores[" << i << "]" << scores[i] << std::endl;
    }

    std::cout << "Size of scores : " << sizeof(scores) << std::endl;
    std::cout << "Size of scores[0] : " << sizeof(scores[0]) << std::endl;
    std::cout << "Score item count : " << (sizeof(scores) / sizeof(scores[0])) << std::endl;

    size_t count {sizeof(scores)/sizeof(scores[0])};

    std::cout << "Imprimir los items" << std::endl;
    for (size_t i {0} ; i < count ; i++){
        std::cout << "scores[" << i << "]" << scores[i] << std::endl;
    }

    return 0;
}
