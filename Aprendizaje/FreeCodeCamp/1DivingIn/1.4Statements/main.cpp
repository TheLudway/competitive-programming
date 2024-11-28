#include <iostream>
#include <string>

int addNumbers(int first_number, int second_number){

    int sum = first_number + second_number;

    return sum;
}

std::string printSums(int n1, int n2){
    int result = addNumbers(n1, n2);

    std::string message = "La suma del num: " + std::to_string(n1) + " y " +
        std::to_string(n2) + " es: " + std::to_string(result);

    return message;
}

int main(int argc, char **argv){

    int n1 = 10;
    int n2 = 10;

    std::cout << "Primer num: " << n1 << std::endl;
    std::cout << "Segundo num: " << n2 << std::endl;

    std::cout << "Suma de ambos num: " << printSums(n1, n2) << std::endl;

    return 0;
}
