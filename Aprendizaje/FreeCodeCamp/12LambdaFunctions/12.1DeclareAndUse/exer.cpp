#include <iostream>
#define endl "\n"

int main(){

    /*
     *  1. Simple Lambda Expression
         Write a lambda function that takes two integers and returns
         their sum. Call this lambda and print the result.
     *  */
    auto lam_1 = [](int a, int b) -> int{
        return (a + b);
    };

    std::cout << "Primer ejercicio : " << lam_1(10, 20) << endl;
/*
 *  2. Lambda with Capture by Value

        Create a lambda function that captures a variable from the surrounding
        scope by value and prints it. Try modifying the captured variable inside
        the lambda and observe the error.
 *  */

    int x {30};
    auto lam_2 = [x](){
        // x += 2; // Ilegal
        std::cout << "Valor de x dentro de lambda " << (x+2) << endl;
    };
    lam_2();

    /*
     *  3. Lambda with Capture by Reference

           Modify the previous exercise to capture the variable by reference
           so that changes inside the lambda reflect outside.
     *  */

    int y {50};
    auto lam_3 = [&y](){
        y += 2;
        std::cout << "Valor de y dentro de lambda " << y << endl;
    };
    std::cout << "Valor inicial de y : " << y << endl;
    lam_3();
    std::cout << "valor de y fuera de lambda : " << y << endl;


    auto lam_4 = [](int a, int b) -> int { return (a + b); };

    std::cout << lam_4(2, 2) << endl;

    int lam_5 = []() -> int {
        return 0;
    };



    return 0;
}
