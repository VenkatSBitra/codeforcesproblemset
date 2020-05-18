#include <bits/stdc++.h>

#define ci(x) (x - 48)
#define ic(x) (x + 48)

using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    for(int i = 0; i < s1.length(); i++){
        s1[i] = ic(ci(s1[i]) ^ ci(s2[i]));
    }
    cout << s1;
}