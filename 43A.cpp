#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    string a, b; cin >> a;
    int ca = 1, cb = 0;
    for(int i = 1; i < n; i++){
        string s; cin >> s;
        if(s == a) ca++;
        else{
            cb++;
            b = s;
        }
    }
    if(ca > cb) cout << a;
    else cout << b;
}