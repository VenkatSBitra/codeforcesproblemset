#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int min = INT_MAX;
    bool check = true;
    int res;
    for(int i = 0; i < n; i++){
        int t; cin >> t;
        if(t == min){
            check = false;
            continue;
        }
        if(t < min){
            min = t;
            res = i + 1;
            check = true;
        }
    }
    if(check) cout << res;
    else cout << "Still Rozdil";
}