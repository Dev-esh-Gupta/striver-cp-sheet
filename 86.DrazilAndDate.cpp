#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll a, b, s;
    cin >> a >> b >> s;

    if(abs(a) + abs(b) > s) cout << "No";
    else if((abs(a) + abs(b) + s) % 2 == 0) cout << "Yes";
    else cout << "No";
}