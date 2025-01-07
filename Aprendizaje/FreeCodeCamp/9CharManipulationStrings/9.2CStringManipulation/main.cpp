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



    // std::strcmp - firma : int strcmp(const char * lhs, const char *rhs);
    // Retornar un valor negativo si lhs aparece antes de rhs en orden lexicografico,
    // Cero si lhs y rhs al compararse son iguales.
    // Y un valor positivo si lhs aparece despues de rhs in orden lexicografico
    std::cout << endl;
    std::cout << "std::strcmp : " << endl;
    const char * string_data1 {"Alabama"};
    const char * string_data2 {"Blabama"};

    char string_data3[] {"Alabama"};
    char string_data4[] {"Alabama"};

    std::cout << "std::strcmp (" << string_data1 << "," << string_data2 << ") : "
        << std::strcmp(string_data1, string_data2) << endl;

    std::cout << "std::strcmp (" << string_data3 << "," << string_data4 << ") : "
        << std::strcmp(string_data3, string_data4) << endl;

    string_data1 = "Alabama";
    string_data2 = "Alabamb";

    std::cout << "std::strcmp (" << string_data1 << "," << string_data2 << ") : "
        << std::strcmp(string_data1, string_data2) << endl;

    string_data1 = "Alacama";
    string_data2 = "Alabama";
    std::cout << "std::strcmp (" << string_data1 << "," << string_data2 << ") : "
        << std::strcmp(string_data1, string_data2) << endl;

    string_data1 = "Alabama";
    string_data2 = "Alabama";
    std::cout << "std::strcmp (" << string_data1 << "," << string_data2 << ") : "
        << std::strcmp(string_data1, string_data2) << endl;


    // std::strncmp : int strncmp (const char *lhs, const char *rhs, std::size_t count);
    // Compara n caracteres en la cadena
    // Retorna : Valor negativo si lhs aparece antes que rhs en orden lexitografico.
    // Cero si lhs y rhs son iguales, o si al contar es cero.
    // Valor positivo si lhs aparece despues de rhs in orden lexicografico

    // Imprimir las comparaciones
    size_t n {4};
    std::cout << endl;
    std::cout << "std::strncmp : " << endl;
    std::cout << "std::strncmp (" << string_data1 << "," << string_data2 << "," << n << ") : "
        << std::strncmp(string_data1, string_data2, n) << endl;

    string_data1 = "aaaia";
    string_data2 = "aaance";

    std::cout << "std::strncmp (" << string_data1 << "," << string_data2 << "," << n << ") : "
        << std::strncmp(string_data1, string_data2, n) << endl;


    // Encuentra la primera aparicion de un caracter
    std::cout << endl;
    std::cout << "std::strchr : " << endl;

    // se utiliza std::strchr para encontrar todos los caracteres uno por uno

    const char *str {"Try not. Do, or do not. There is no try."};
    char target = 'T';
    const char *result = str;
    int iterations{};

    while ((result = std::strchr(result, target)) != nullptr){
        std::cout << "Fond " << target
            << " starting at " << result << endl;
        ++result;
        ++iterations;
    }

    std::cout << "iterations : " << iterations << endl;

    // Encontrar la ultima ocurrencia
    std::cout << endl;
    std::cout << "std::strrchr : "<< endl;

    char input[] = "/home/user/hello.cpp";
    char * output = std::strrchr(input, '/');
    if (output)
        std::cout << output+1 << endl;



    return 0;
}
