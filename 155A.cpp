#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int t; cin >> t;
    int max = t, min = t;
    int amaze = 0;
    for(int i = 1; i < n; i++){
        cin >> t;
        if(t < min){
            min = t;
            amaze++;
        }
        if(t > max){
            max = t;
            amaze++;
        }
    }
    cout << amaze;
}