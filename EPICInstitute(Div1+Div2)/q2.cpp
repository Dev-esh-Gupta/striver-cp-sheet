#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(ll i=0; i<n; i++){
            cin >> a[i];
        }
        priority_queue<ll, vector<ll>, greater<ll>> pq;
        ll tillMax = 0;
        for(ll i=0; i<n; i++){
            if(tillMax <= a[i]){
                tillMax = a[i];
            }else{
                pq.push(tillMax - a[i]);
            }
        }
        ll ans = 0;
        ll settled = 0;
        while(!pq.empty()){
            ll topVal = pq.top();
            ans += (topVal-settled) * (pq.size() + 1);
            pq.pop();
            settled = topVal;
        }
        cout << ans << endl;
    }
}