#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    scanf("%d%d%d%d%d%d%d%d", &n, &k, &l, &c, &d, &p, &nl, &np);
    int drink = k * l;
    int lemon = c * d;
    cout << min({drink / (nl * n), p / (np * n), lemon / n});
}