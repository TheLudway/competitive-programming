#include <iostream>
#include <cstring>
#define endl "\n";


int main(){
    // std::strlen : Encontrar la longitud de una cadena
    const char message1 [] {"The sky is blue."};

    // Array decae en un puntero cuando se usa const char*
    const char* message2 {"The sky is blue."};
    std::cout << "message1 : " << message1 << endl;

    // strlen ignora caracter nulo
    std::cout << "strlen(message1) : " << std::strlen(message1) << endl;

    // Inclue el caracter nulo
    std::cout << "sizeof(message1) : " << sizeof(message1) << endl;

    // strlen todavia funciona con arrays decaidas
    std::cout << "strlen(message2) : " << std::strlen(message2) << endl;

    // Imprime el tamano del puntero
    std::cout << "sizeof(message2) : " << sizeof(message2) << endl;

    return 0;
}
