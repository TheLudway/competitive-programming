#include <iostream>
#include <string>
int main(){

    short int w {};
    std::cin >> w;

    std::string res {};
    if (w == 2 ){
        std::cout << "NO";
    }else{
        res = (w%2==0) ? "YES" : "NO";
        std::cout << res;
    }


    return 0;
}
