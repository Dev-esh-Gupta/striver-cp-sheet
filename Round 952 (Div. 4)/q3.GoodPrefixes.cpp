#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll sum = 0;
        int maxi = 0;
        int ans = 0;
        while(n--){
            int val;
            cin >> val;
            sum += val;
            maxi = max(maxi, val);
            if(maxi*2 == sum) ans++;
        }
        cout << ans << endl;
    }
}