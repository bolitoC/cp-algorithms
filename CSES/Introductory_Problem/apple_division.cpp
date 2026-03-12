#include <bits/stdc++.h>
using namespace std;

int main(){
    long long sum = 0;
    int n; 
    cin >> n;
    vector<long long> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
    }

    long long sum_obj = sum / 2, sum_max = 0;

    for(int i = 0; i < (1 << n); i++){
        long long sum_actual = 0;

        for(int j = 0; j < n; j++){
            if(i & (1 << j)) sum_actual += v[j];

            if(sum_actual > sum_obj){
                sum_actual -= v[j];
                break;
            }    
        }
        sum_max = max(sum_max, sum_actual);
    }

    cout << sum - 2 * sum_max;
}