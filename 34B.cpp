#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int t; cin >> t;
        v.push_back(t);
    }
    sort(v.begin(), v.end());
    int i = 0, val = 0;
    while(v[i] < 0 && i < m){
        val -= v[i++];
    }
    cout << val;
}