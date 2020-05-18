#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n; cin >> n;
    while(n--){
        long long a, b;
        cin >> a >> b;
        b--;
        while(b--){
            int max = 0, min = 9;
            long long t = a;
            while(t){
                if(t % 10 > max) max = t % 10;
                if(t % 10 < min) min = t % 10;
                t /= 10;
            }
            a = a + (max * min);
            if(min == 0) break;
        }
        cout << a << endl;
    }
}
