#include <bits/stdc++.h>

#define ll long long 

using namespace std;

int main(){
    int n; cin >> n;
    unordered_map<ll, ll> u;
    for(ll i = 1; i < n + 1; i++){
        ll t; cin >> t;
        u[t] = i;
    }
    ll q; cin >> q;
    ll c1 = 0, c2 = 0;
    for(ll i = 0; i < q; i++){
        ll a; cin >> a;
        ll t = u[a];
        c1 += t;
        c2 += n - t + 1;
    }
    cout << c1 << ' ' << c2;
}