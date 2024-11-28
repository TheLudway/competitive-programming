#include <iostream>

int main(){
    float num1;
    float num2;
    float num3;

    std::cout << "Ingrese tres numeros separados por espacio" << std::endl;
    std::cin >> num1 >> num2 >> num3;
    std::cout << "El promedio de: " << num1 << ", " << num2 << ", " << " y " << num3 << " es: " << (num1+num2+num3)/3 << std::endl;


    return 0;
}
