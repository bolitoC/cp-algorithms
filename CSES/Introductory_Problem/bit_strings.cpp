#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long res = 1;
    long long mod = 1e9 + 7;
    long long a = 2;
    while(n){
        if(n & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        n >>=1;
    }

    cout << res;
}