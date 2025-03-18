#include <iostream>
#include <string>
#define endl "\n"


int main(){

    [](){
        std::cout << "Holi" << endl;
    }();

    [](double a, double b){
        std::cout << "a + b : " << (a + b) << endl;
    }(12.1, 5.7);

    auto result = [](double a, double b)-> double{
        return (a + b);
    };
    std::cout << "result : " << result << endl;

    std::cout << result(1.0,2.0) << endl;

    auto func3 = [](double a, double b) -> int{
        return a + b;
    };

    auto func4 = [](double a, double b){
        return a+b;
    };

    double a {6.9};
    double b {3.7};

    auto result3 = func3(a, b);
    auto result4 = func4(a, b);

    std::cout << "Result3 : " << result3 << endl;
    std::cout << "Result4 : " << result4 << endl;


    return 0;
}
