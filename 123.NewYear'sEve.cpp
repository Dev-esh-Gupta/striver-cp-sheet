#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;

int main(){
    ll n, k;
    cin >> n >> k;
    ll ans;
    if(k == 1){
        ans = n;
    }else{
        ll bits = 0;
        while(n){
            bits++;
            n /= 2;
        }
    
        ans = pow(2, bits) - 1;
    }

    
    cout << ans << endl;
}