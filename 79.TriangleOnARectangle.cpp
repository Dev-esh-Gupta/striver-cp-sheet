#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll w, h;
        cin >> w >> h;
       
        ll ans = 0;
        for(int l=0; l<4; l++){
             ll k;
            cin >> k;
            ll mini = INT_MAX, maxi = INT_MIN;
            for(int i=0; i<k; i++){
                ll p;
                cin >> p;
                mini = min(p, mini);
                maxi = max(p, maxi);
            }
            if(l < 2){
                ans = max(ans, (maxi-mini)*h);
            }else{
                ans = max(ans, (maxi-mini)*w);
            }
        }
        cout << ans << endl;
    }
}