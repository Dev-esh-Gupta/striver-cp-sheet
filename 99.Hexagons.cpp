#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll n ;
    cin >> n;
    ll ans = 1;
    if(n == 0){
        cout << ans ;
    }else{
        ans += 3 * n * (n + 1);
        cout << ans;
    }
}