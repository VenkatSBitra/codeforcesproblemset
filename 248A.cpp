#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> l, r;
    int left = 0, right = 0;
    int change = 0;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        left += a;
        right += b;
    }
    if(2 * left < n) change += left;
    else change += (n - left);
    if(2 * right < n) change += right;
    else change += (n - right);
    cout << change;
}