#include <iostream>

int main(){

    int *lots_of_ints1 { new int [100000000000000]};

    for (size_t i {} ; i < 100000000000000; i ++){
        int *lots_of_ints2 { new int [1000000]};
    }


    return 0;
}
