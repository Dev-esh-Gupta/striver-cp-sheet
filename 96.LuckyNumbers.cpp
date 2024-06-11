#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int n;
    cin >> n;
    ll ans = 0;
    while(n){
        ans += pow(2,n);
        n--;
    }
    cout << ans;
}