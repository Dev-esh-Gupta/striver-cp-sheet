#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int n;
    cin >> n;
    while(n--){
        ll k, x;
        cin >> k >> x;
        ll ans = (k - 1)*9 + x;
        cout << ans << endl;
    }
}