#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

template <typename T>
T maximum(T a, T b){
    return (a > b) ? a : b;
}


template<typename T>
class Clase{
    public:
        T value;

        Clase(T v){
            value = v;
        }

        void display(){
            cout << value << endl;
        }
};


int main(){

    int x {5};
    int y {7};
    int result = maximum(x, y);
    std::cout << "result: " << sizeof(result) << endl;

    Clase<int> obj1(42);
    obj1.display();
    Clase<string> obj2("Ni haooo");
    obj2.display();
    Clase<float> obj3(3.14f);
    obj3.display();

    return 0;
}
