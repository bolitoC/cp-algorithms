#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        long long y, x;
        cin >> y >> x;

        long long k = max(x, y), ne;

        if(k & 1) (x == k) ? ne = k*k - y + 1 : ne = (k-1)*(k-1) + x;
        else (y == k) ? ne = k*k - x + 1 : ne = (k-1)*(k-1) + y;

        cout << ne << "\n";
    }
}