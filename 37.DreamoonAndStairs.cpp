#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int ans;
    if(n < m){
        ans = -1;
    }else if(n == m){
        ans = n;
    }else{
        if(n % 2 == 0){
            ans = n/2;
        }else{
            ans = n/2 + 1;
        }
        // cout << ans << " " << m << endl;
        while(ans%m != 0){
            ans++;
        }
    }
    cout << ans;
}