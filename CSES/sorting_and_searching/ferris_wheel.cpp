#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;

    vector<int> v(n);
    for(auto &w : v) cin >> w;

    sort(v.begin(), v.end());

    int i = 0, j = n - 1, cnt = 0;
    
    while(i <= j){
        if(v[i] + v[j] <= x) i++;
        j--;
        cnt++;
    }
    cout << cnt;
}