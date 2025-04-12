#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    int n {};
    cin >> n;

    for (int i=0; i < n; ++i){
        string palabra {};
        cin >> palabra;

        if (size(palabra) > 10){
            cout << palabra[0] << size(palabra) - 2 << palabra[size(palabra)-1] << endl;
        }else {
            cout << palabra << endl;
        }
    }

    return 0;
}

