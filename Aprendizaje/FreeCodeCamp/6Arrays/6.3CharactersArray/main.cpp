#include <iostream>
#include <string>

int main(){

    char message [5] {'H', 'e', 'l', 'l', 'o'};

    std::cout << "message : ";
    for (auto c : message){
        std::cout << c;
    }

    std::cout << std::endl;
    std::cout << "size : " << std::size(message) << std::endl;

    // Modificar los elementos de la array
    std::cout << std::endl;
    std::cout << "Modificar los datos de la array " << std::endl;

    message[1] = 'a';

    std::cout << "Message : ";
    for ( auto c : message ){
        std::cout << c;
    }
    std::cout << std::endl;
    std::cout << "Terminacion con \0" << std::endl;
    char message1 [] {'H', 'e', 'l', 'l', 'o', '\0'};

    std::cout << "message1 : " << message1 << std::endl;
    std::cout << "size : " << std::size(message1) << std::endl;

    std::cout << std::endl;
    std::cout << "Automatica terminacion de \0" << std::endl;

    char message2 [6] {'H', 'e', 'l', 'l', 'o'};

    std::cout << "message2 : " << message2 << std::endl;
    std::cout << "size : " << std::size(message2) << std::endl;

    std::cout << std::endl;
    std::cout << "Puede aparecer algo raro " << std::endl;

    char message3 [] {'H', 'e', 'l', 'l', 'o'};

    std::cout << "message3 : " << message3 << std::endl;
    std::cout << "size : " << std::size(message3) << std::endl;

    std::cout << std::endl;
    std::cout << "Cadenas de C " << std::endl;
    char message4 [] {"Hello"};

    std::cout << "message4 : " << message4 << std::endl;
    std::cout << "size : " << std::size(message4) << std::endl;

    std::cout << std::endl;
    std::cout << "Cadenas completas con espacios" << std::endl;
    char message5 [] {"Hola Mundooooooooooooooooooooooooooooooooo!"};
    std::cout << "message5 : " << message5 << std::endl;
    std::cout << "sizeof(message5): " << sizeof(message5) << std::endl;
    std::cout << "size : " << std::size(message5) << std::endl;

    for (size_t i {0} ; i < std::size(message5)-1 ; i++){
        std::cout << "message5[" << i << "]" << message5[i] << std::endl;
    }

    std::cout << "Literales de String pero con std::strign" << std::endl;
    std::string holaString {"Hola Mundooooooooooooooooooooooooooooooooo!"};
    std::cout << "holaString : " << holaString << std::endl;
    std::cout << "sizeof(holaString) : " << sizeof(holaString) << std::endl;
    std::cout << "size : " << std::size(holaString) << std::endl;

    for (size_t i {0} ; i < std::size(holaString) ; i++) {
        std::cout << "holaString[" << i << "]" << holaString[i] << std::endl;
    }

    

    int n1 {1000};
    std::string n_string {std::to_string(n1)};
    std::cout << n_string << std::endl;

    for (size_t i {0} ; i < std::size(n_string) ; i ++){
        std::cout << "n_string[" << i << "]" << n_string[i] << std::endl;
    }
    std::cout << "Volver a la normalidad" << std::endl;
    std::cout << std::stoi(n_string) << std::endl;
    int i {1};
    std::cout << n_string[i] << " " << n_string[i+1] << std::endl;

    int n2 {1000};
    std::cout << "Num en entero " << n2 << std::endl;
    std::cout << "Num en string " << std::to_string(n2) << std::endl;
    std::cout << "Num de vuelta a entero " << std::stoi(std::to_string(n2)) << std::endl;
    std::cout << std::to_string(n2) << std::endl;

    std::cout << "Recorrer string" << std::endl;
    auto size {std::size(std::to_string(n2))};

    for (size_t i {0} ; i < size ; i++){
        std::cout << std::to_string(n2)[i] << std::endl;
    }


    return 1;
}
