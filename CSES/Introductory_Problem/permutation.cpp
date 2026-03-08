#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    if(n == 2 || n == 3) cout << "NO SOLUTION";
    else{
        int k = n/2, u = n/2;
        if(n & 1) u += 1;
        for(int i = 1; i <= k; i++) cout << 2 * i << " ";
        for(int i = 1; i <= u; i++) cout << 2 * i - 1 << " ";
    }
}