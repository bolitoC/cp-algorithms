#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n; 

    for(int i = 0; i < (1 << n); i++){

        int x = i ^ (i >> 1);

        for(int j = n-1; j >= 0; j--){
            if(x & (1 << j)) cout << 1;
            else cout << 0;
        }

        cout << '\n';
    }
}