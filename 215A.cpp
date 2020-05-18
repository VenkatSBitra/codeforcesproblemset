#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> f;
    for(int i = 0; i < n; i++){
        int k; cin >> k;
        f.push_back(k);
    }
    int m; cin >> m;
    vector<int> r;
    for(int i = 0; i < m; i++){
        int k; cin >> k;
        r.push_back(k);
    }
    int res = 0, max = -1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(!(r[j] % f[i]) && (max < r[j] / f[i])) max = r[j] / f[i];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(!(r[j] % f[i]) && (max == r[j] / f[i])) res++;
        }
    }
    cout << res;
}