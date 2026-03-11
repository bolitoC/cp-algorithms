#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    vector<int> v(26,0);
    set<char> letras;

    for(char l : s){
        v[l - 'A']++;
        letras.insert(l);
    }

    string left = "", center = "", right = "";
    int impar = 0;

    for(char l : letras){
        int size = v[l - 'A'];

        if(size % 2){
            impar++;
            center = l;
        }

        if(impar > 1){
            cout << "NO SOLUTION";
            return 0;
        }

        left += string(size/2, l);
        right += string(size/2, l);
    }

    reverse(right.begin(), right.end());

    cout << left + center + right;
}