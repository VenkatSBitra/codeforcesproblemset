#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int res = 0;
    for(int a = 0; a <= sqrt(max(n, m)); a++){
        for(int b = 0; b <= sqrt(max(n, m)); b++){
            if(a*a + b == n && a + b*b == m) res++;
        }
    }
    cout << res;
}