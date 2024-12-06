#include <iostream>
#include <limits>


int main(){

    std::cout << "El rango para short es desde " << std::numeric_limits<short>::min() << " hasta "
        << std::numeric_limits<short>::max() << std::endl;

    std::cout << "El rango para unsigned short es desde " << std::numeric_limits<unsigned short>::min() << " hasta "
        << std::numeric_limits<unsigned short>::max() << std::endl;

    std::cout << "El rango para el int es desde " << std::numeric_limits<int>::min() << " hasta "
        << std::numeric_limits<int>::max() << std::endl;

    std::cout << "El rango para unsigned int es desde " << std::numeric_limits<unsigned int>::min() << " hasta "
        << std::numeric_limits<unsigned int>::max() << std::endl;

    std::cout << "El rango para long es desde " << std::numeric_limits<long>::min() << " hasta "
        << std::numeric_limits<long>::max() << std::endl;

    std::cout << "El rango para float es desde " << std::numeric_limits<float>::min() << " hasta "
        << std::numeric_limits<float>::max() << std::endl;

    std::cout << "El rango para float (con lowest) es desde " << std::numeric_limits<float>::lowest() << " hasta "
        << std::numeric_limits<float>::max() << std::endl;

    std::cout << "El rango para double (con lowest) es desde " << std::numeric_limits<double>::lowest() << " hasta "
        << std::numeric_limits<double>::max() << std::endl;

    std::cout << "El rango para long double (con lowest) es desde " << std::numeric_limits<long double>::lowest() << " hasta "
        << std::numeric_limits<long double>::max() << std::endl;

    // Otras facilidades
    // Mas info en: https://en.cppreference.com/w/cpp/types/numeric_limits
    std::cout << "unsigned long long int is signed : " << std::numeric_limits<unsigned long long int>::is_signed << std::endl;
    std::cout << "unsigned long long int digits : " << std::numeric_limits<unsigned long long int>::digits << std::endl;

    return 0;
}
