#include<bits/stdc++.h>
using namespace std;

int main(){
    int k, n, w;
    cin >> k >> n >> w;
    int i = 1;
    int cost = 0;
    while(w--){
        cost += i*k;
        i++;
    }
    if(cost < n) cout << 0;
    else cout << (cost - n);
}