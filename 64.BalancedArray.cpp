#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if((n/2)%2 != 0){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
            ll num = 2;
            ll nByTwo = n/2;
            for(int i=0; i<nByTwo; i++){
                cout << num << " ";
                num += 2;
            }
            num = 1;
            for(int i=0; i<nByTwo-1; i++){
                cout << num << " ";
                num += 2;
            }
            cout << 3*nByTwo - 1 << endl;
        }
    }
}