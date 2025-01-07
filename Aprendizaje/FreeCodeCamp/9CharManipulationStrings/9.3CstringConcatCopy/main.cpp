#include <iostream>
#include <cstring>
#define endl "\n"

int main(){

    // Concatenation
    std::cout << endl;
    std::cout << "std::strcat : " << endl;

    char dest[50] = "Hello ";
    char src[50] = "World!";
    std::strcat(dest, src);
    std::strcat(dest, " Goodbye World!");
    std::cout << "dest : " << dest << endl;

    // Mas concatenar
    std::cout << endl;
    std::cout << "More std::strcat : " << endl;

    char *dest1 = new char[30] {'F', 'i', 'r', 'e', 'l', 'o', 'r', 'd', '\0'};
    char *source1 =
        new char[30] {',', 'T', 'h', 'e', ' ', 'P', 'h', 'e', 'n', 'i', 'x', ' ', 'K', 'i', 'n', 'g', '!', '\0'};

    std::cout << "std::strlen(dest1) : " << std::strlen(dest1) << endl;
    std::cout << "std::strlen(source1) : " << std::strlen(source1) << endl;

    std::cout << "Concatenando..." << endl;
    std::strcat(dest1, source1);

    std::cout << "std::strlen(dest1) : " << std::strlen(dest1) << endl;
    std::cout << "dest1 : " << dest1 << endl;

    // std::strncat : concatena n caracters desde src hasta dest y
    // retorna un puntero al resultado de la cadena
    // firma : char *strncat(char *dest, const char *src, std::size_t count);

    std::cout << endl;
    std::cout << "std::strncat :" << endl;
    char dest2[50] {"Hello"};

    char source2[30] = {" There is a bird on my window"};

    // Se puede incluso utilizar el puntero retornaro inmediatamente para imprimir
    // Este es un patro que se vera en mucho codigo de C++
    std::cout << std::strncat(dest2, source2, 6) << endl;

    // O se puede utilizar std::strncat separadamente e imprimir dest2
    std::strncat(dest2, source2, 6);
    std::cout << "La cadena concatenada es : " << dest2 << endl;

    // std::strcpy - firma : char * strcpy(char * dest, const char* src);
    std::cout << endl;
    std::cout << "std::strcpy : " << endl;
    const char* source3 = "C++ es un lenguaje de programacion multiproposito";
    char *dest3 = new char[std::strlen(source3) + 1]; // +1 Para el caracter nulo

    std::strcpy(dest3, source3);

    std::cout << "sizeof(dest3) : " << sizeof(dest3) << endl;
    std::cout << "std::strlen(dest3) : " << std::strlen(dest3) << endl;
    std::cout << "dest3 : " << dest3 << endl;

    // std::strncpy : Copia n caracteres desde src hasta dest
    // Signature : char *strncpy(char *dest, const char *src, std::size_t count);
    std::cout << endl;
    std::cout << "std::strncpy : " << endl;
    const char* source4 = "Hello";
    char dest4[] = {'a', 'b', 'c', 'd', 'e', 'f', '\0'};

    std::cout << "dest4 : " << dest4 << endl;
    std::cout << "Copiando..." << endl;
    std::strncpy(dest4, source4, 4);
    std::cout << "dest4 : " << dest4 << endl;

    return 0;
}
