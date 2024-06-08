#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        int ec = n / k;
        int ans = 0;
        if(m <= ec){
            ans = m;
        }else{
            m = m - ec;
            k = k - 1;
            ans = ec - (m/k);
            if(m%k != 0){
                ans--;
            }
        }
        cout << ans << endl;
    }
}