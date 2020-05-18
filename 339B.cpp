#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, m; cin >> n >> m;
    long long k = 1, s = 0;
    for(long long i = 0; i < m; i++){
        long long t; cin >> t;
        if(t < k) s += abs(n - (k - t));
        else s += (t - k);
        k = t;
    }
    cout << s;
}