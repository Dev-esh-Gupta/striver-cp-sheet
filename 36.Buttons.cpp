#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int n;
    cin >> n;
    int i = 0;
    ll ans = 0;
    while(n){
        ans += (n-1)*(i+1) + 1;
        i++;
        n--;
    }
    cout << ans ;
}