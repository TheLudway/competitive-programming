#include <iostream>

int main(){

    const size_t size { 10};

    double *p_salaries {new double[size]};

    int *p_students { new(std::nothrow) int [size]{}};

    double *p_scores { new(std::nothrow) double[size]{1, 2, 3, 4, 5}};

    if(p_scores){
        std::cout << "size of scores (it's a regular pointer) : " << sizeof(p_scores) << "\n";
        std::cout << "Successfully allocated memory for scores. \n";

        for (size_t i {};i < size ; i ++){
            std::cout << "Value : " << p_scores[i] << "\n";
        }
    }

    delete[] p_salaries;
    p_salaries = nullptr;

    delete[] p_students;
    p_students = nullptr;

    delete[] p_scores;
    p_scores = nullptr;

    std::cout << "Program end well\n";

    // Static arrays vs dynamic arrays
    int scores[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Vive en la pila

    std::cout << "Scores size : " << std::size(scores) << std::endl;

    for(int i : scores){
        std::cout << "Value : " << i << std::endl;
    }

    int *p_scores1 = new int[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Vive en el heap
    // std::cout << "p_scores1 size : " << std::size(p_scores1) << std::endl;
    // for(auto i : p_scores1){
    //     std::cout << "Value : " << i << std::endl;
    // }


    return 0;
}
