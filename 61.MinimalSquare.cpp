#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int side = 2*min(a, b);
        int ans = max(side*side, max(a*a, b*b));
        cout << ans << endl;
    }
}