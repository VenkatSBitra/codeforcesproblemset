#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, r = ""; cin >> s;
    int i = 0;
    while(i < s.length()){
        if(s.substr(i, 3) == "WUB"){
            if(!(*(r.end() - 1) == ' ' || r.length() == 0)) r += " ";
            i += 3;
        }else{
            r += s[i]; i++;
        }
    }
    cout << r;
}