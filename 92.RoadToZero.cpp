#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll x, y;
        cin >> x >> y;
        ll a, b;
        cin >> a >> b;
        ll cost = 0;
        if(x == y){
            cost = 2*a > b ? x * b : 2 * x * a;
        }else{
            cost = x > y ? ((x - y)*a + (2*a > b ? y * b : 2 * y * a)) : ((y - x)*a + (2*a > b ? x * b : 2 * x * a));
        }
        cout << cost << endl;
    }
}