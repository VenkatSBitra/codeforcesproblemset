#include <bits/stdc++.h>

using namespace std;

int main(){
    array<array<int, 3>, 3> ls;
    ls.fill({1, 1, 1});
    array<int, 4> x = {-1, 1, 0, 0};
    array<int, 4> y = {0, 0, -1, 1};
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            int c; scanf("%d", &c);
            if(!(c % 2)) continue;
            ls[i][j] = 1 - ls[i][j];
            for(int k = 0; k < 4; k++){
                int ni = i + x[k];
                int nj = j + y[k];
                if(ni < 0 || nj < 0 || ni > 2 || nj > 2) continue;
                ls[ni][nj] = 1 - ls[ni][nj];
            }
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d", ls[i][j]);
        }
        printf("\n");
    }
}