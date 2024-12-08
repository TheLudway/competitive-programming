#include <iostream>

int main(){

    bool red = false;
    bool green {true};
    bool yellow {false};
    bool police_stop {true};

    if(red){
        std::cout << "Stop" << std::endl;
    }
    if(yellow){
        std::cout << "Slow Down" << std::endl;
    }
    if(green){
        std::cout << "Go" << std::endl;
    }

    return 0;
}
