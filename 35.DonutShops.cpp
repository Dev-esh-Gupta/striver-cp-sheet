#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll a, b, c;
        cin >> a >> b >> c;

        // each donut cost at shop b
        double cost = c / b;
        if(a >= c){
            cout << -1 << " " << b << endl;
        }else{
            cout << 1 << " ";
            if(cost >= a){
                cout << -1 << endl;
            }else{
                cout << b << endl;
            }
        }
    }
    return 0;
}