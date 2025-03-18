#include <bits/stdc++.h>

#define endl "\n"

int main (){
    
    int a {16};

    auto sqrt = [a] (){
        return std::pow(a, 0.5);
    };

    std::cout << "Raiz de " << a << ": " << sqrt() << endl;


    return 0;
}


