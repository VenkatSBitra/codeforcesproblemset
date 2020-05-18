#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, res = 0; cin >> n;
    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        v.push_back({x, y});
    }
    for(auto i = v.begin(); i != v.end(); i++){
        bool l = false, r = false, u = false, d = false;
        for(auto j = v.begin(); j != v.end(); j++){
            if(j->first > i->first && j->second == i->second) r = true;
            else if(j->first < i->first && j->second == i->second) l = true;
            else if(j->first == i->first && j->second > i->second) d = true;
            else if(j->first == i->first && j->second < i->second) u = true;
            
        }
        if(l && r && u && d) res++;
    }
    cout << res;
}