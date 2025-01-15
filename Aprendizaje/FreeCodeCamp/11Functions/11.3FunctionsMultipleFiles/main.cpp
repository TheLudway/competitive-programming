#include <iostream>
#include "compare.h" // Preprocesamiento
#include "operations.h"
#define endl "\n";




int main(){

    int max_num = max(34, 56);
    int min_num = min(34, 56);
    int incr_mult_num = incr_mult(2, 3);

    std::cout << "max : " << max_num << endl;
    std::cout << "min : " << min_num << endl;
    std::cout << "incr_mult_num : " << incr_mult_num << endl;

    return 0;
}
