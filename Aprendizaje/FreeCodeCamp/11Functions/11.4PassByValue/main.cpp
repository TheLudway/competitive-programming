#include <iostream>

#define endl "\n"

void say_age(int age);

int main(){

    int age{23};

    std::cout << "age - before : " << age << endl;
    std::cout << "&age : " << &age << endl;
    say_age(age);
    std::cout << "age - after : " << age << endl;

    return 0;
}


void say_age(int age){
    ++age;
    std::cout << "Hello! you are " << age << " years old." << endl;
    std::cout << "&age (dentro) : " << &age << endl;
}
