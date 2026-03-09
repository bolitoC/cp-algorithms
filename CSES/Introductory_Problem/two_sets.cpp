#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, s1 = 0;
    cin >> n;

    long long s = n * (n + 1) / 2;
    if(s & 1) cout << "NO";
    else{
        vector<int> v1, v2;
        for(long long i = n; i > 0; i--){
            s1 += i;
            if(s1 <= s/2) v1.push_back(i);
            else{
                s1 -= i;
                v2.push_back(i);
            }
        }
        cout << "YES" << "\n" << v1.size() << "\n";
        for(int i = 0; i < v1.size(); i++) cout << v1[i] << " ";
        cout << "\n" << v2.size() << "\n";
        for(int i = 0; i < v2.size(); i++) cout << v2[i] << " ";
    }
}