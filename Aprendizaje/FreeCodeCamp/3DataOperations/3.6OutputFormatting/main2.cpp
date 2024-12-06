#include <iostream>
#include <iomanip>

int main(){
    std::cout << std::setprecision(6);

    double d {34.1};
    double e {101.99};
    double f {12.0};
    int g {55};

    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl;
    std::cout << "g : " << g << std::endl;

    std::cout << std::endl;
    std::cout << std::showpoint;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl;
    std::cout << "g : " << g << std::endl;


    return 0;
}
