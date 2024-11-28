#include <iostream>

int main(){

    int a {6};
    int b {3};
    int c {8};
    int d {9};
    int e {3};
    int f {2};
    int g {5};

    // Las operaciones van de izquierda a derecha debido a que es suma y resta
    int result = a + b * c - d/e - f + g;

    std::cout << "Resultado: " << result << std::endl;

    result = a/b*c + d -e + f;
    std::cout << "Resultado: " << result << std::endl;

    result = (a + b) * c - d/e -f + g;
    std::cout << "Resultado () : " << result << std::endl;

    return 0;
}
