#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    while(true){
        cout << n << " ";
        if(n == 1) break;
        (n & 1) ? n = 3*n+1 : n/=2;
    }
}