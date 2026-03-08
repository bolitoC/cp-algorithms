#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long a,b, ct = 0;
    cin >> a;
    for(int i = 1; i < n; i++){
        cin >> b;
        if(a > b) ct += (a-b);
        a = max(a,b);
    }
    cout << ct;
}