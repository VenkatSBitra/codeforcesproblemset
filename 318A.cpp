#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;
    if(k > (n + 1)/2) cout << (k - ((n+1)/2)) * 2;
    else cout << 2 * k - 1;
}