#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int num_5 = 0;
    for(int i = 0; i < n; i++){
        int t; cin >> t;
        if(t == 5) num_5++;
    }
    if(num_5 - n == 0) cout << -1;
    else if(num_5 < 9) cout << 0;
    else{
        string s1((num_5/9)*9, '5');
        string s2(n - num_5, '0');
        cout << s1 + s2;
    }
}