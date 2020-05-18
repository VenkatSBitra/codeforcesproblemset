#include <bits/stdc++.h>

using namespace std;

int main(){
    int k; cin >> k;
    vector<int> v;
    for(int i = 0; i < 12; i++){
        int t; cin >> t;
        v.push_back(t);
    }
    sort(v.begin(), v.end(), greater<int>());
    int n = 0;
    while(k > 0){
        k -= v[n];
        n++;
    }
    n = n == 13 ? -1 : n;
    cout << n;
}