#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long t,a,b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        
        string val = (a + b) % 3 == 0 && max(a,b) <= 2 * min(a,b) ? "YES\n" : "NO\n";
        cout << val;
    }
}