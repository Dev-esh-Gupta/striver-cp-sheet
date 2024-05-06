#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll n, m, k;
    cin >> n >> m >> k;
    ll happiness[n];
    for(ll i=0; i<n; i++){
        cin >> happiness[i];
    }

    ll maxiIndex = 0, secMaxiIndex = -1;
    for(ll i=1; i<n; i++){
        if(happiness[i] > happiness[maxiIndex]){
            secMaxiIndex = maxiIndex;
            maxiIndex = i;
        }else if(secMaxiIndex == -1 || happiness[i] > happiness[secMaxiIndex]){
            secMaxiIndex = i;
        }
    }
    //cout << maxiIndex << " " << secMaxiIndex << endl;
    ll secondCount = m / (k+1);
    ll ans = (secondCount*happiness[secMaxiIndex]) + ((m - secondCount) * happiness[maxiIndex]);
    cout << ans;
    return 0;
}