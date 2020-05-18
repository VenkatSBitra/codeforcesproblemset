#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector<int> v;
    queue<int> q;
    for(int i = 0; i < n; i++){
        int t; cin >> t;
        v.push_back(t);
        q.push(i);
    }
    int i;
    while(!q.empty()){
        i = q.front();
        q.pop();
        v[i] -= m;
        if(v[i] > 0) q.push(i);
    }
    cout << i + 1;
}