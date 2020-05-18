#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v(26, 0);
    string k = "", s = "";
    string a; cin >> a;
    for(auto c : a) v[c-'a']++;
    bool check = true;
    for(int i = 0; i < 26; i++){
        if(v[i] % n){
            check = false;
            break;
        }else{
            int a = v[i] / n;
            while(a--) k += ('a' + i);
        }
    }
    if(check){
        while(n--) s += k;
        cout << s;
    }else{
        cout << -1;
    }
}