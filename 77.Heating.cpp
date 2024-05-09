#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll n;
    cin >> n;
    while(n--){
        ll c, sum;
        cin >> c >> sum;
        if(c > sum) cout << sum << endl;
        else{
            ll t = sum / c;
            ll res = 0;
            ll extra = sum%c;
            if(extra == 0) res=c*t*t;
            else res=(t*t*(c-extra))+extra*(t+1)*(t+1);
            cout<<res<<endl;
        }
    }
}