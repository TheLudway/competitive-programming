#include <iostream>
#define endl "\n"

void say_age_p(int* age);
void say_age(int age);

int main(){

    int age {23};

    std::cout << "age - antes pointer : " << age << "&age : " << &age << endl;
    say_age_p(&age);
    std::cout << "age - after pointer : " << age << "&age : " << &age << endl;
    std::cout << "age - antes normal  : " << age << "&age : " << &age << endl;
    say_age(age);
    std::cout << "age - after normal : " << age << "&age : " << &age << endl;
    return 0;
}

void say_age_p(int* age){
    ++(*age);
    std::cout << "Hola! Tienes " << *age << " años" << "age : " << age << endl;
}

void say_age(int age){
    ++age;
    std::cout << "Hola! Tienes " << age << " años" << "&age : " << &age << endl;
}
