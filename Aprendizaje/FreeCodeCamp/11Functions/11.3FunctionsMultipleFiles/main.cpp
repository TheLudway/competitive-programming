#include <iostream>
#include "compare.h" // Preprocesamiento
#define endl "\n";



int main(){

    int max_num = max(34, 56);
    int min_num = min(34, 56);

    std::cout << "max : " << max_num << endl;
    std::cout << "min : " << min_num << endl;

    return 0;
}
