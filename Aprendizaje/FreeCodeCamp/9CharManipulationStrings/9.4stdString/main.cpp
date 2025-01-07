#include <iostream>
#include <string>
#define endl "\n"

int main(){
    // Declaracion de std::string
    std::string full_name;
    std::string planet {"Earth. Where the sky is blue"};
    std::string prefered_planet {planet};
    std::string message {"Hello there", 5};

    std::string weird_message(4, 'e');

    std::string greeting{"Hello World"};
    std::string saying_hello{greeting, 6, 5};

    std::cout << "full_name : " << full_name << endl;
    std::cout << "planet : " << planet << endl;
    std::cout << "prefered_planet : " << prefered_planet << endl;
    std::cout << "message : " << message << endl;
    std::cout << "weird_message : " << weird_message << endl;
    std::cout << "greeting : " << greeting << endl;
    std::cout << "saying_hello : " << saying_hello << endl;

    planet = "Earth. Where the sky is blue. Earth. Where the sky is blue. Earth. Where the sky is blue";
    std::cout << "planet : " << planet << endl;

    return 0;
}
