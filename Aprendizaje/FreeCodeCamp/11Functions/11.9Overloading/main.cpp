#include <iostream>
#define endl "\n"

int max(int a, int b){
    std::cout << "int overload called" << endl;
    return (a>b)? a : b;
}

double max(double a, double b){
    std::cout << "double overload called" << endl;
    return (a>b)? a : b;
}

double max(int a, double b){
    std::cout << "double overload called" << endl;
    return (a>b)? a : b;
}

double max(int a, int b, int c){
    std::cout << "double overload three parameters called" << endl;
    return (a>b && a>c)? a : (b>a & b>c)? b: c;
}

std::string_view max(std::string_view a, std::string_view b){
    std::cout << "std::string_view overload called" << endl;
    return(a>b)? a: b;
}

int main(){
    int x{4};
    int y{9};
    double a{5.4};
    double b{7.4};
    double c{9.0};
    std::string_view w {"a"};
    std::string_view e {"z"};

    auto result = max(a, b);
    std::cout << sizeof(result) << endl;
    auto result_2 = max(x, y);
    std::cout << sizeof(result_2) << endl;
    auto result_3 = max(a, b, c);
    auto result_4 = max(w, e, x);
    std::cout << result_4 << endl;


    return 0;
}
