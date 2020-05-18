#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    bool c = true;
    for(int i = 0; i < s.length(); i++)
        if(s[i] != t[t.length() - i - 1]){
            c = false;
            break;
        }
    if(c) cout << "YES";
    else cout << "NO";
}