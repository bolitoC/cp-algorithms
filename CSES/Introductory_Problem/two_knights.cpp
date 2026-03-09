#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    for(long long k = 1;k <= n; k++){
        long long total = (k * k) * (k * k -1) / 2;
        long long ataque = 4 * (k - 2) * (k - 1);
        cout << total - ataque << "\n";
    }
}