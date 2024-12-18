#include <iostream>

int main(){

    char *p_char_var {nullptr};
    char char_var {'A'};

    p_char_var = &char_var;

    std::cout << &char_var;

    std::cout << "The value stored in p_char_var is : " << *p_char_var << std::endl;

    char char_var1 {'C'};
    p_char_var = &char_var1;

    std::cout << "The value stored in p_char_var is : " << *p_char_var << std::endl;

    // Inicializar con strings
    const char *p_message {"Hello World!"};

    std::cout << "The message is : " << p_message << std::endl;

    std::cout << "The value stored at p_message is : " << *p_message << std::endl;

    std::cout << "sizeof(p_message) : " << sizeof(p_message) << std::endl;

    char message1[] {"Hello World!"};
    message1[0] = 'B';
    std::cout << "message1 : " << message1 << std::endl;

    return 0;
}
