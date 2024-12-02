#include <iostream>

int main(){

    bool a {true};
    bool b {false};
    bool c {true};

    std::cout << std::boolalpha;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;


    std::cout << std::endl;
    std::cout << "Operaciones con AND" << std::endl;

    std::cout << " a && b : " << (a && b) << std::endl;
    std::cout << " a && c : " << (a && c) << std::endl;
    std::cout << " a && b && c : " << (a && b && c) << std::endl;

    std::cout << std::endl;
    std::cout << "Operaciones con OR" << std::endl;
    std::cout << " a || b : " << (a || b) << std::endl;
    std::cout << " a || c : " << (a || c) << std::endl;
    std::cout << " a || b || c : " << (a || b || c) << std::endl;

    std::cout << std::endl;
    std::cout << "Operaciones con NOT" << std::endl;
    std::cout << "!a : " << !a << std::endl;
    std::cout << "!b : " << !b << std::endl;
    std::cout << "!c : " << !c << std::endl;

    std::cout << std::endl;
    std::cout << "Combinar operadores logicos" << std::endl;
    std:: cout << "!(a && b) || c : " << (!(a && b) || c) << std::endl;

    int d {45};
    int e {20};
    int f {11};

    std::cout << std::noboolalpha;
    std::cout << std::endl;
    std::cout << "Operaciones relacionales y logicas con enteros y con std::noalphabool" << std::endl;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl;

    std::cout << std::endl;

    std::cout << "(d > e) && (d > f) : "<< ((d > e) && (d > f)) << std::endl;
    std::cout << "(d == 3) || (e <= f ) : " << ((d == e) || (e <= f)) << std::endl;
    std::cout << "(d < e) || (d > f) : " << ((d < e) || (d > f)) << std::endl;
    std::cout << "(f > e) || (d < f) : " << ((f > e) || (d < f)) << std::endl;
    std::cout << "(d > f) && (f <= d) : " << ((d > f) && (f <= d)) << std::endl;
    std::cout << "(d > e) && (d <= f) : " << ((d > e) && (d <= f)) << std::endl;
    std::cout << "(! a) && (d == e) : " << ((!a) && (d == e)) << std::endl;
    std::cout << "(! a) && (d == e) : " << ((!a) && (d == e)) << std::endl;

    return 0;
}
