#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string ans = "";
    while(n>0 && n%7 != 0) n -= 4, ans += '4';
    while(n>0 && n%7 == 0) n -= 7, ans += '7';
    if(n == 0) cout << ans;
    else cout << -1;
}