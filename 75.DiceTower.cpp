#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll x; 
        cin >> x;
        if(x > 14 && x%14 > 0 && x%14 <= 6){
            cout <<"YES" << endl;
        }else{
            cout << "NO"<<endl;
        }
    }
}