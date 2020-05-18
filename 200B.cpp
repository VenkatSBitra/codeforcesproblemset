#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int t; cin >> t;
        v.push_back(t);
    }
    double res = double(accumulate(v.begin(), v.end(), 0)) / v.size();
    cout << res;
}