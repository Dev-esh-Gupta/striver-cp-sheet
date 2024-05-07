#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, y, z;
    cin >> x >> y >> z;
    int coconut = (x / z) + (y / z);
    int rEx = 0;
    if((z - (x % z)) <= (y % z)){
        rEx = min((z - (x % z)), (z - (y % z)));
        coconut++;
    }
    cout << coconut << " " << rEx;
}