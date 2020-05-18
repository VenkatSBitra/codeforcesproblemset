#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int lcc = 0;
    for(auto c = s.begin(); c != s.end(); c++) if(islower(*c)) lcc++;
    if(2 * lcc >= s.length()) for_each(s.begin(), s.end(), [](char &c){c = tolower(c);});
    else for_each(s.begin(), s.end(), [](char &c){c = toupper(c);});
    cout << s;
}