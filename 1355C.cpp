#include <bits/stdc++.h>

using namespace std;

int main(){
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    int n = 0, numY = C - B + 1;

    for(int z = C; z <= D; z++){
        for(int x = B; x >= A; x--){
            if(z - x > C) break;
            if(z - x < B) n += numY;
            else if(z - x >= C) continue;
            else n += C - z + x;
        }
    }
    cout << n;
}