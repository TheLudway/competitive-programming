#include <iostream>

int main(){

    int *p_number { new int {67}};

    int number {55};
    p_number = &number;

    // Doble alocacion
    int *p_number1 { new int {55}};

    // Usar el puntero
    // Se debio eliminar el puntero
    p_number1 = new int {44};

    return 0;
}
