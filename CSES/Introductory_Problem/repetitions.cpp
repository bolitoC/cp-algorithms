#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    vector<int> dp(s.size(), 1);
    int m = 1;
    for(int i = 1; i < s.size(); i++){
        if(s[i - 1] == s[i]) dp[i] = dp[i - 1] + 1;
        m = max(dp[i], m);
    }
    cout << m;
}