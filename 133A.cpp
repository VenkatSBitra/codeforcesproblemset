#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int check = false;
    for(auto c : s) if(c == 'H' || c == 'Q' || c == '9') {check = true; break;}
    if(check) printf("YES");
    else printf("NO");
}