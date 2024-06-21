#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll can(ll cap){
    ll ret = 0;
    for(ll k=2; k*k*k<=cap; k++){
        ret += cap/(k*k*k);
    }
    return ret;
}

int main(){
    ll m;
    cin >> m;
    ll low =0, high=1e18;
    ll ans = -1;
    while(low <= high){
        ll mid = low + (high - low)/2;
        ll ret = can(mid);
        if(ret == m) ans = mid;
        if(ret>=m) high = mid-1;
        else low=mid+1;
    }
    cout << ans;
    return 0;
}