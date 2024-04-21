#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int chocolate[n];
    for(int i=0; i<n; i++){
        cin >> chocolate[i];
    }
    long long ans = 0;
    int taken = INT_MAX;
    for(int i=n-1; i>=0; i--){
        if(taken == 0) continue;
        if(taken > chocolate[i]){
            ans += chocolate[i];
            taken = chocolate[i];
        }else if(taken <= chocolate[i]){
            ans += taken-1;
            taken--;
        }
    }
    cout << ans;
}