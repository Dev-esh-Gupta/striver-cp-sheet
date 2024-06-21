#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, h;
        cin >> n >> h;
        vector<ll> a(n);
        for(ll i=0; i<n; i++){
            cin >> a[i];
        }
        ll l = 1, r = h;
        ll k = -1;
        while(l <= r){
            ll m = l + (r - l)/2;
            ll stub = 0;
            for(ll i=0; i<n; i++){
                if(i != n-1) stub += min((a[i + 1] - a[i]), m);
                else stub += m;
            }
            if(stub >= h){
                k = m;
                r = m - 1;
            }else{
                l = m + 1;
            }
        }
        cout << k << endl;
    }
}