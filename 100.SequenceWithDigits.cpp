#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll a, k;
        cin >> a >> k;
        while(--k){
            ll mini = LONG_MAX, maxi = LONG_MIN;
            ll cpy = a;
            while(cpy){
                ll rem = cpy%10;
                mini = min(rem, mini);
                maxi = max(maxi, rem);
                cpy /= 10;
            }
            if(mini == 0) break;
            a = a + mini * maxi;
        }
        cout << a << endl;
    }
}