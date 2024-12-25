#include <iostream>

int main(){

    int *lots_of_ints1 { new int [100000000000000]};

    for (size_t i {} ; i < 100000000000000; i ++){
        int *lots_of_ints2 { new int [1000000]};
    }

    // Excepciones
    for (size_t i {0}; i < 100000000000; i ++){
        try {
            int* lots_of_ints3 { new int [10000000]};
        }catch(std::exception& ex){
            std::cout << "Excepcion : " << ex.what() << std::endl;
        }
    }

    // std::nothrow
    for (size_t i {0} ; i < 100 ; i ++){
        int * data = new (std::nothrow) int [10000000000];
        if (data!= nullptr){
            std::cout << "Datos almacenados\n";
        }else{
            std::cout << "Almacenamiento de datos fallido\n";
        }
    }


    return 0;
}
