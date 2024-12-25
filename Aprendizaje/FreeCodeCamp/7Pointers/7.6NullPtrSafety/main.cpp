#include <iostream>

int main(){

    int *p_number{nullptr};
    p_number = new int {7};

    if(!(p_number==nullptr)){
        std::cout << "p_number apunta a una direccion valida : " << p_number << "\n";
    }else{
        std::cout << "p_number apunta a una direccion invalida.\n";
    }
    delete p_number;
    p_number = nullptr;

    if (p_number){
        std::cout << "p_number apunta a una direccion valida : " << p_number << "\n";
    }else{
        std::cout << "p_number apunta a una direccion invalida.\n";
    }

    int *p_number1{};
    delete p_number1;

    if(p_number1){
        delete p_number1;
        p_number1 = nullptr;
    }



    return 0;
}
