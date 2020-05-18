#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    int num_4 = 0;
    bool one = false, check = true;
    for(int i = 0; i < s.length(); i++){
        if(!one && s[i] != '1'){
            check = false;
            break;
        }else if(!one || (one && s[i] == '1')){
            one = true;
            num_4 = 0;
        }else if(one && s[i] == '4'){
            num_4++;
            if(num_4 > 2){
                check = false;
                break;
            }
        }else{
            check = false;
            break;
        }
    }
    if(check) cout << "YES";
    else cout << "NO";
}