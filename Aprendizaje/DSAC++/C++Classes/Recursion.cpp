#include <bits/stdc++.h>
#define endl "\n"
using namespace std;


int f(int x) {
    if (x == 0)
        return 0;
    else
        return 2 * f ( x - 1)+ x * x;
}

// int bad( int n){
//     if (n == 0 )
//         return 0;
//     else
//         return bad(n / 3 + 1) + n - 1;
// }

void printDigit(int n){
    cout << n << " ";
}

void printOut(int n){
    if (n >= 10)
        printOut(n / 10);
    printDigit(n % 10);
}



int main (){
    printOut(20);
    cout << endl;
    return 0;
}
