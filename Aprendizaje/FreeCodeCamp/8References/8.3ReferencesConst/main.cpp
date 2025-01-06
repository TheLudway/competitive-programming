#include <iostream>

int main(){

    // Referencia no constante
    std::cout << "\n";
    std::cout << "Referencia no constante : \n";
    int age {27};
    int& ref_age {age};

    std::cout << "age : " << age << "\n";
    std::cout << "ref_age : " << ref_age << "\n";

    // Se puede modificar la variable original a traves de la referencia
    std::cout << "\n";
    std::cout << "Modificar la variable original a traves de la referencia : \n";

    ref_age++;

    std::cout << "age : " << age << "\n";
    std::cout << "ref_age : " << ref_age << "\n";

    const int * const p_age {&age};




    return 0;
}
