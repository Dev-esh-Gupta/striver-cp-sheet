#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y, n;
        cin >> x >> y >> n;
        int ans;
        if(n%x == y){
            ans = n;
        }else{
            int quotient = n / x;
            if(quotient == 0){
                ans = y;
            }else{
                if((x * (quotient)) + y <= n)
                    ans = (x * (quotient)) + y;
                else
                    ans = (x * (quotient)) - (x - y);
            }
        }
        cout << ans << endl;
    }
}