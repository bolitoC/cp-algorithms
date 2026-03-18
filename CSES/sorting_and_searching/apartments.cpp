#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> applicant(n), apartment(m);

    for(auto &x : applicant) cin >> x;
    for(auto &x : apartment) cin >> x;

    sort(applicant.begin(), applicant.end());
    sort(apartment.begin(), apartment.end());

    int i = 0, j = 0, cnt = 0;

    while(i < n && j < m){
        if(apartment[j] < applicant[i] - k) j++;
        else if(apartment[j] > applicant[i] + k) i++;
        else{
            cnt++;
            i++;
            j++;
        }
    }
    cout << cnt;
}