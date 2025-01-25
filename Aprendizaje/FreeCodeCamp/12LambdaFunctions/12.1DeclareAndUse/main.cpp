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
    }(12.1, 5.7);
    std::cout << "result : " << result << endl;




    return 0;
}
