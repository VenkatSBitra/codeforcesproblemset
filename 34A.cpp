#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    queue<int> q;
    for(int i = 0; i < n; i++){
        int t; cin >> t; q.push(t);
    }
    int min = 2000;
    int i = 1, res = 1;
    int k = q.front();
    q.pop(); q.push(k);
    while(!q.empty()){
        if(min > abs(k - q.front())){ min = abs(k - q.front()); res = i; }
        i++;
        k = q.front();
        q.pop();
    }
    if(res == n) cout << n << " 1";
    else cout << res << " " << res + 1;
}