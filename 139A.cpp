#include <bits/stdc++.h>

using namespace std;

int main(){
    int p; cin >> p;
    vector<int> v;
    for(int i = 0; i < 7; i++){
        int t; cin >> t;
        v.push_back(t);
    }
    int i = 0;
    while(true){
        p -= v[i];
        if(p <= 0) break;
        if(i == 6) i = 0;
        else i++;
    }
    cout << i + 1;
}