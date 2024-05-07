#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll x, y, z;
    cin >> x >> y >> z;
    ll coconut = (x / z) + (y / z);
    ll rEx = 0;
    if((z - (x % z)) <= (y % z)){
        rEx = min((z - (x % z)), (z - (y % z)));
        coconut++;
    }
    cout << coconut << " " << rEx;
}