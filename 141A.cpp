#include <bits/stdc++.h>

using namespace std;

int main(){
    string a, b, s;
    cin >> a >> b >> s;
    int arr[26] = {};
    bool check = true;
    for(auto c : a) arr[c - 65]++;
    for(auto c : b) arr[c - 65]++;
    for(auto c : s) arr[c - 65]--;
    for(int i = 0; i < 26; i++) if(arr[i]) {check = false; break;}
    if(check) printf("YES");
    else printf("NO");
}