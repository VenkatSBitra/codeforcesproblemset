#include <bits/stdc++.h>

using namespace std;

int main(){
    long long a, b, c;
    cin >> a >> b >> c;
    long long s = sqrt(a * b * c);
    cout << 4 * ((s / a) + (s / b) + (s / c));
}