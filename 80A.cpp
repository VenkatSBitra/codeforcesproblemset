#include <bits/stdc++.h>

using namespace std;

// for 1 <= a, b <= 50
// Commented code - O(sqrt(n)) -> 92 ms
// Non-commented - O(n * log(log(n))) -> 62 ms

/*
bool isPrime(int n){
    if(n <= 1) return false;
    if(n <= 3) return true;

    if(n % 2 == 0 || n % 3 == 0) return false;

    for(int i = 5; i * i <= n; i += 6) 
        if(n % i == 0 || n % (i + 2) == 0) 
            return false;
    return true;
}
*/

void SieveOfEratosthenes(int a, int b){ 
    bool prime[b+1]; 
    memset(prime, true, sizeof(prime)); 
    for (int p=2; p*p<=b; p++){ 
        if (prime[p] == true){
            for (int i = p * p; i <= b; i += p) 
                prime[i] = false; 
        } 
    } 
    bool check = true;
    for(int p = a + 1; p < b; p++) 
       if (prime[p]){
           check = false;
           break;
       }
    if(check && prime[b]) printf("YES");
    else printf("NO");
}

int main(){
    int a, b;
    cin >> a >> b;
    bool check = true;
    /*
    for(int i = a + 1; i < b; i++){
        if(isPrime(i)){
            check = false;
            break;
        }
    }
    if(check && isPrime(b)) printf("YES");
    else printf("NO");
    */
   SieveOfEratosthenes(a, b);
}