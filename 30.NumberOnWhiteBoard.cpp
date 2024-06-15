#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << 2 << endl;
        int num = n;
        while(--n){
            cout << n << " " << num << endl;
            num = ceil((1.0)*(n+num)/2);
        }
    }
}