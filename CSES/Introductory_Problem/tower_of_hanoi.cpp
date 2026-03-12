#include <bits/stdc++.h>
using namespace std;

void h(int n, int a, int b, int c){
    if(!n) return;
    h(n-1,a,c,b);
    cout << a << " " << c << "\n";
    h(n-1,b,a,c);
}

int main(){
    int n; cin>>n;
    cout << (1 << n) - 1<< "\n";
    h(n,1,2,3);
}