#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n,a,b;
        cin >> n >> a >> b;

        if(a+b>n || (min(a,b)==0 && max(a,b)>0)) {
            cout<<"NO\n";
            continue;
        }

        cout<<"YES\n";

        vector<int> p1(n), p2(n);

        for(int i=0;i<n;i++) p1[i]=i+1;

        int k=0;

        for(int i=a;i<a+b;i++) p2[k++]=i+1;

        for(int i=0;i<a;i++) p2[k++]=i+1;

        for(int i=a+b;i<n;i++) p2[k++]=i+1;

        for(int x:p1) cout<<x<<" ";
        cout<<"\n";

        for(int x:p2) cout<<x<<" ";
        cout<<"\n";
    }
}