#include <iostream>
#define endl "\n";


int main(){

    // Mirar si un caracter es alfanumerico
    std::cout << endl;
    std::cout << "std::isalnum : " << endl;

    std::cout << "C es alfanumerico : " << std::isalnum('C') << endl;
    std::cout << "^ es alfanumerico : " << std::isalnum('^') << endl;

    char input_char {'*'};
    if(std::isalnum(input_char)){
        std::cout << input_char << " es alfanumerico." << endl;
    }else{
        std::cout << input_char << " no es alfanumerico." << endl;
    }

    // Mirar si el caracter es alfabetico
    std::cout << endl;
    std::cout << "std::isalpha : " << endl;
    std::cout << "C es alfabetico : " << std::isalpha('C') << endl;
    std::cout << "^ es alfabetico : " << std::isalpha('^') << endl;
    std::cout << "7 es alfabetico : " << std::isalpha('7') << endl;

    // Mirar si un caracter esta vacio
    std::cout << endl;
    std::cout << "std::isnblank : " << endl;
    char message[] {"Hello there. How are you doing? The sun is shining."};
    std::cout << "message : " << message << endl;

    int blank_count{};
    for (size_t i {0}; i < std::size(message); i++){
        // std::cout << "value : "<< message[i] << endl;
        if(std::isblank(message[i])){
            std::cout << "Found a blank character at index : [" << i << "]" << endl;
            ++blank_count;
        }
    }
    std::cout << "En total se han encontrado " << blank_count << " blank characters." << endl;
    std::cout << "tamano en bytes " << sizeof(message) << endl;

    // Mirar si un caracter es minuscula o mayuscula
    std::cout << "std::islower and std::isupper : " << endl;

    std::cout << endl;
    char thought[] {"The C++ Programming Language is one of the most used on the Planet"};
    int lowercase_count{};
    int uppercase_count{};

    std::cout << "String original : " << thought << endl;

    for (auto character : thought) {
        if (std::islower(character)){
            std::cout << " " << character;
            ++lowercase_count;
        }
        if (std::isupper(character)) {
            ++uppercase_count;
        }
    }
    std::cout << endl;
    std::cout << "Encontrado : " << lowercase_count << " caracteres en minuscula y "
        << uppercase_count << " caracteres en mayuscula " << endl;

    std::cout << endl;
    std::cout << "std::isdigit : " << endl;

    char statement[] {"Mr Hamilton owns 221 cows. That's a lot of cows! The kid exclaimed."};
    std::cout << "statement : " << statement << endl;

    int digit_count{};

    for (auto character : statement) {
        if(std::isdigit(character)){
            std::cout << "Encontrado digito : " << character << endl;
            ++digit_count;
        }
    }
    std::cout << "Encontrado : " << digit_count << " digitos en la declaracion de la cadena " << endl;

    // Convertir caracteres a minuscula utilizando la funcion std::tolower()
    std::cout << endl;
    std::cout << "std::tolower and std::toupper: " << endl;
    char original_str[] {"Home. The feeling of belonging"};
    char dest_str[std::size(original_str)];

    for(size_t i{}; i < std::size(original_str); i ++){
        dest_str[i] = std::toupper(original_str[i]);
    }

    std::cout << "Original string : " << original_str << endl;
    std::cout << "Uppercase string : " << dest_str << endl;

    // Convertir esto a minuscula. Cambiar la array de lugar
    for(size_t i{}; i < std::size(original_str); i ++){
        dest_str[i] = std::tolower(original_str[i]);
    }

    std::cout << "Cadena minuscula : " << dest_str << endl;

    return 0;
}
