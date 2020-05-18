#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int steps = 0;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int t; cin >> t;
        v.push_back(t);
    }
    int max_i = 0;
    for(int i = 0; i < n; i++){
        if(v[max_i] < v[i]) max_i = i;
    }
    for(int i = max_i - 1; i >= 0; i--){
        int temp = v[max_i];
        v[max_i] = v[i];
        v[i] = temp;
        max_i--;
        steps++;
    }
    int min_i = 0;
    for(int i = 0; i < n; i++){
        if(v[min_i] >= v[i]) min_i = i;
    }
    for(int i = min_i + 1; i < n; i++){
        int temp = v[min_i];
        v[min_i] = v[i];
        v[i] = temp;
        min_i++;
        steps++;
    }
    cout << steps;
}