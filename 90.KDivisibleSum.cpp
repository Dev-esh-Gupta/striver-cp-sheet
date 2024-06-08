#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        double n, k;
        cin >> n >> k;
        if(k == n) cout << 1 << endl;
        else{
            k = ceil(n/k) * k;
            int res = ceil(k/n);
            cout << res << endl;
        }
    }
}