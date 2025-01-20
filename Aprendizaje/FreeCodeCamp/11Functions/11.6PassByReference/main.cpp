#include <iostream>
#define endl "\n"

void say_age(int& age);

int main(){
    int age {23};

    std::cout << "age - before : " << age << "&age : " << &age <<  endl;
    say_age(age);
    std::cout << "age - after : " << age << "&age : " << &age << endl;

    return 0;
}

void say_age(int& age){
    ++age;
    std::cout << "Hola! Tienes " << age << " años" << "&age : " << &age <<  endl;
}
