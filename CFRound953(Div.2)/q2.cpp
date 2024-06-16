#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, a, b;
        cin >> n >> a >> b;
        ll k = min(n, b-a);
        ll ans = b>a?(b*(b+1))/2 - (b-k)*(b-k+1)/2 + (n - k)*a:n*a;
        cout << ans << endl;
    }
    return 0;
}