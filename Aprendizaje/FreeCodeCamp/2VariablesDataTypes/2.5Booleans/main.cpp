#include <iostream>

int main(){
    bool red_light {true};
    bool green_light {false};

    if (red_light == true){
        std::cout << "Alto!" << std::endl;
    }else{
        std::cout << "Pase!" << std::endl;
    }

    if (green_light) {
        std::cout << "La luz es verde!" << std::endl;
    }else{
        std::cout << "La luz no esta verde!" << std::endl;
    }

    std::cout << "----- Imprimir bool -----" << std::endl;
    std::cout << "red_light : " << red_light << std::endl;
    std::cout << "green_light : " << green_light << std::endl;

    std::cout << "----- Utilizando std::boolalpha -----" << std::endl;
    std::cout << std::boolalpha;
    std::cout << "red_light : " << red_light << std::endl;
    std::cout << "green_light : " << green_light << std::endl;

    std::cout << "sizeof(bool) : " << sizeof(bool) << std::endl;


    return 0;
}
