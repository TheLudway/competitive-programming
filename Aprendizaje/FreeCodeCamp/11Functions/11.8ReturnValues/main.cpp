#include <iostream>
#include <string>
#define endl "\n"


int sum(int a, int b){
    int result = a + b;
    std::cout << "In : &result(int) : " << &result << endl;
    return result;
}

std::string add_strings(std::string str1, std::string str2){
    std::string result = str1 + str2;
    std::cout << "In : &result(std::string) : " << &result << endl;
    return result;
}


int main(){
    int a {34};
    int b {16};

    int result = sum(a, b);
    std::cout << "Out : &result(int) : " << &result << endl;
    std::cout << "sum : " << result << endl;

    std::string str_result = add_strings(std::string("Hello"), std::string(" World!"));
    std::cout << "Out : &result(strd::string) : " << &str_result << endl;
    std::cout << "str_result : " << str_result << endl;
    return 0;
}
