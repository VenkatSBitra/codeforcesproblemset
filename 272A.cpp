#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int sum = 0, res = 0;
    unordered_set<int> s;
    for(int i = 0; i < 5; i++) s.insert((n + 1)*i + 1);
    for(int i = 0; i < n; i++){
        int t; cin >> t; sum += t;
    }
    for(int i = 1; i < 6; i++){
        if(s.find(sum + i) == s.end()) res++;
    }
    cout << res;
}