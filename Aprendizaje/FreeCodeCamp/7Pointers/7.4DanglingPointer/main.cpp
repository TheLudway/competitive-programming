#include <iostream>

int main(){


    // Caso 1, puntero sin inicializar8
    int *p_number;

    std::cout << std::endl;
    std::cout << "Case 1 : Uninitialized pointer : . " << std::endl;
    std::cout << "p_number : " << p_number << std::endl;

    std::cout << "End of program!" << std::endl;

    // Caso 2, puntero eliminado
    std::cout << std::endl;
    std::cout << "Caso 2 : Puntero eliminado" << std::endl;
    int *p_number1 {new int {67}};

    std::cout << "*p_number1 (antes de eliminarse) :  " << *p_number1 << std::endl;
    delete p_number1;
    std::cout << "*p_number1 (despues de eliminarse) : " << *p_number1 << std::endl;

    // Caso 3, multiples punteros apuntando a la misma direccion
    std::cout << std::endl;
    std::cout << "Caso 3 : multiples punteros apuntando a la misma direccion : " << std::endl;

    int *p_number3 {new int {83}};
    int *p_number4 {p_number3};

    std::cout << "p_number3 - " << p_number3 << " - " << *p_number3 << std::endl;
    std::cout << "p_number4 - " << p_number4 << " - " << *p_number4 << std::endl;

    // Eliminar p_number3
    delete p_number3;
    p_number3 = nullptr;

    // p_number4 apunta a una memoria eliminad. Esto hace que su valor sea un valor no deseado.
    std::cout << "p_number4(despues de eliminar p_number3) - " << p_number4 << " - " << *p_number4 << std::endl;


    // Solucion 1, inicializar los punteros inmediatamente despues de la declaracion
    std::cout << std::endl;
    std::cout << "Solution 1 : " << std::endl;
    int *p_number5{};
    int *p_number6{new int {56}};

    // Checar por nullptr antes de usarse
    if (p_number6 != nullptr) {
        std::cout << "*p_number6 : "<< *p_number6 << std::endl;
    }

    // Solucion 2:
    // Despues de llamar delete para un puntero, recordar reiniciar
    // el puntero a nullptr para dejar claro que no apunta a ningun lado
    std::cout << std::endl;
    std::cout << "Solution 2 : " << std::endl;
    int *p_number7 { new int {82}};

    // Usar el puntero para lo que se desee
    std::cout << "p_number7 - " << p_number7 << " - " << *p_number7 << std::endl;

    delete p_number7;
    p_number7 = nullptr;

    if (p_number7 != nullptr) {
        std::cout << "*p_number7 : " << *p_number7 << std::endl;
    }


    // Solucion 3
    // Para multiples punteros apuntando a la misma direccion, estar seguros de que
    // hay un putero master que posee la memoria (responsabe para liberar cuando
    // sea necesario), los otros punteros deberian solo referenciar cuando el
    // puntero master es valido
    int *p_number8 {new int {382}};
    int *p_number9 {p_number8};

    // Referenciar el puntero y usarlo
    std::cout << "p_number 8 - " << p_number8 << " - " << *p_number8 << std::endl;

    if(!(p_number8 == nullptr)){
        std::cout << "p_number9 - " << p_number9 << " - " << *p_number9 << std::endl;
    }

    delete p_number8;
    p_number8 = nullptr;

    if(!(p_number8 == nullptr)){
        std::cout << "p_number9 - " << p_number9 << " - " << *p_number9 << std::endl;
    }else{
        std::cerr << "Peligro: Intentando usar un puntero invalido" << std::endl;
    }

    return 0;
}
