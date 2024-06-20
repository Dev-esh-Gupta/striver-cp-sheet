#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int n, k;
    cin >> n >> k;
    vector<ll> amountNeeded(n);
    vector<ll> quantityAvailable(n);
    for(int i=0; i<n; i++){
        cin >> amountNeeded[i];
    }
    for(int i=0; i<n; i++){
        cin >> quantityAvailable[i];
    }
    ll low = 0;
    ll high = 1e10;
    ll maxCookie = 0;
    while(low <= high){
        ll mid = low + (high - low)/2;
        ll extraIngridient = 0;
        ll z = 0;
        for(int i=0; i<n; i++){
            ll extra = (mid*amountNeeded[i] - quantityAvailable[i]);
            extraIngridient += max(extra, z);
        }
        if(extraIngridient <= k){
            maxCookie = mid;
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    cout << maxCookie;
}