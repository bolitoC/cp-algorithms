#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, v;
    cin >> n;
    vector<int> vp(n, false);
    for(int i = 0; i < n - 1; i++){
        cin >> v;
        vp[v - 1] = true;
    }

    for(int i = 0; i < n; i++){
        if(!vp[i]){
            cout << i + 1;
            break;
        }
    }
}