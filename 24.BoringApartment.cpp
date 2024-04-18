#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin>>x;
        int ans = 10*(x%10 - 1);
        int i = 1;
        while(x){
            ans += i;
            i++;
            x /= 10;
        }
        cout << ans << endl;
    }
}