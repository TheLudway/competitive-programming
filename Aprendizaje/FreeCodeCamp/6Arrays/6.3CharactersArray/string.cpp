#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>


int main(){

    int a {};
    std::cin >> a;

    while (a != 0){

        std::string arr [a];

        for (int i {0}; i < a ; i++){
            std::string str {};
            std::cin >> str;

            std::transform(str.begin(), str.end(), str.begin(),
                           [](unsigned char c) {return std::tolower(c);});
            arr[i] = str;
        }

        for(const std::string &text : arr){
            std::cout << "Value of text: " << text << std::endl;
        }

        std::cout << std::endl;

        std::cin >> a;
    }
    



    return 0;
}
