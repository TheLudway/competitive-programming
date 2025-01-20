#include <iostream>
#include <string>
#define endl "\n"

void max_str(const std::string& input1, const std::string input2, std::string& output){
    if (input1 > input2){
        output = input1;
    }else {
        output = input2;
    }
}

void max_int(int input1, int input2, int& output){
    if(input1 > input2){
        output = input1;
    }else{
        output = input2;
    }
}

void max_double (double input1, double input2, double* output){
    if(input1 > input2){
        *output = input1;
    }else{
        *output = input2;
    }
}


int main(){

    std::string str1 {"Hola"};
    std::string str2 {"Hola"};
    std::string ans {};

    max_str(str1, str2, ans);
    std::cout << "max_str()" << endl;
    std::cout << "ans : " << ans << endl;


    int int1 {3};
    int int2 {4};
    int ans_int {};
    max_int(int1, int2, ans_int);
    std::cout << "max_int()" << endl;
    std::cout << "ans_int : " << ans_int << endl;

    double dou1 {5.5};
    double dou2 {5.6};
    double ans_double {};
    max_double(dou1, dou2, &ans_double);
    std::cout << "max_double()" << endl;
    std::cout << "ans_double : " << ans_double << endl;

    return 0;
}
