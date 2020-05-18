#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    while(n--){
        int k; cin >> k;
        vector<int> v;
        for(int i = 0; i < k; i++){
            int t; cin >> t;
            v.push_back(t);
        }
        sort(v.begin(), v.end());
        int i = 0, grp = 0, cs = 0;
        while(i < v.size()){
            cs++;
            if(v[i] <= cs){
                grp++;
                cs = 0;
            }
            i++;
        }
        cout << grp << endl;
    }
}