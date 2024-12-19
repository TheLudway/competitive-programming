#include <iostream>


int main(){

    // int number {22};
    // int *p_number = &number;

    // std::cout << "\n";
    // std::cout << "Declarar punteor y asignare una direccion : \n";
    // std::cout << "num : " << number << "\n";
    // std::cout << "p_number : " << p_number << "\n";
    // std::cout << "&number : " << &number << "\n";
    // std::cout << "*p_number : " << *p_number << "\n";

    // int *p_number1;
    // int number1 {12};
    // p_number1 = &number1;
    // std::cout << "\n";
    // std::cout << "Puntero sin inicializar : \n";
    // std::cout << "*p_number1 : " << *p_number1 << "\n";

    // MAL
    // Escribir en un puntero sin inicializar
    // int *p_number2;
    // *p_number2 = 55;
    // std::cout << "\n";
    // std::cout << "Escribir en un puntero sin inicializar \n";
    // std::cout << "p_number2 : " << p_number2 << "\n";
    // std::cout << "*p_number2 : " << *p_number2 << "\n";

    // int *p_number3 {};
    // *p_number3 = 33; // Crashea

    // std::cout << "\n";

    // int *p_number4 {nullptr};
    // p_number4 = new int;

    // *p_number4 = 77;
    // std::cout << "\n";
    // std::cout << "Colocar en memoria dimanica: \n";
    // std::cout << "*p_number4 : " << *p_number4 << "\n";

    // delete p_number4;
    // p_number4 = nullptr;

    // std::cout << "\n";

    int *p_number5 {new int};
    int *p_number6 {new int (22)};
    int *p_number7 {new int {23}};

    std::cout << std::endl;
    std::cout << "Inicializar con una direccion valida de memoria : \n";
    std::cout << "p_number5 : " << p_number5 << "\n";
    std::cout << "*p_number5 : " << *p_number5 << "\n";

    std::cout << "p_number6 : " << p_number6 << "\n";
    std::cout << "*p_number6 : " << *p_number6 << "\n";

    std::cout << "p_number7 : " << p_number7 << "\n";
    std::cout << "*p_number7 : " << *p_number7 << "\n";

    delete p_number5;
    p_number5 = nullptr;

    delete p_number6;
    p_number6 = nullptr;

    delete p_number7;
    p_number7 = nullptr;

    // Reutilizar punteros
    p_number5 = new int(81);
    std::cout << "*p_number5 : " << *p_number5 << "\n";

    delete p_number5;
    p_number5 = nullptr;

    // Eliminar dos veces un puntero
    p_number5 = new int(99);
    std::cout << "*p_number5 :" << *p_number5 << "\n";

    delete p_number5;



    std::cout << "Finalizar programa\n";

    const double pi = 3.14;
    const double *cptr = &pi;

    const int x {3 };




    return 0;
}
