#include <iostream>

int main(){
    int scores[10];


    std::cout << "Escribir datos manualmente" << std::endl;
    scores[0] = 20;
    scores[1] = 21;
    scores[2] = 22;

    // Imprimir datos
    for (size_t i{0} ; i < 10 ; i++){
        std::cout << "Puntajes[" << i << "]" << scores[i] << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Escribir datos en una lista con un ciclo" << std::endl;

    // Escribir datos
    for (size_t i {0} ; i < 10 ; i++){
        scores[i] = i*3;
    }

    // Leer datos
    for (size_t i {0} ; i < 10 ; i++){
        std::cout << "scores[" << i << "]" << scores[i] << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Declarar una array y colocar datos" << std::endl;

    double salaries[5] {12.7, 7.5, 13.2, 8.1, 9.3};
    for (size_t i {0} ; i < 5 ; i++){
        std::cout << "salary[" << i << "]" << salaries[i] << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Dejar afuera algunos elementos sin inicializar" << std::endl;

    int families[5] {12, 7, 5};

    for (size_t i {0} ; i < 5 ; i++){
        std::cout << "families[" << i << "]" << families[i] << std::endl;
    }

    std::cout << std::endl;
    int class_sizes[] {10, 12, 15, 11, 18, 17};

    for(auto value : class_sizes){
        std::cout << "value : " << value << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Arrays constantes" << std::endl;

    // const int multiplies [] {22, 30, 15};
    // multiplies[1] = 20; Error

    std::cout << "Sumar los elementos de la lista" << std::endl;

    int scores2 [] {2, 5, 7, 2, 5, 6, 9};
    int sum {0};

    for (int element : scores2){
        sum += element;
    }
    std::cout << "Suma de la lista: " << sum << std::endl;


    return 0;
}
