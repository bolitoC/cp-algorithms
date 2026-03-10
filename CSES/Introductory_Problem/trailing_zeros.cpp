#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, den = 5;
    cin >> n;

    int ct = 0;
    while(den <= n){
        ct += (n/den);
        den *= 5;
    }

    cout << ct;
}