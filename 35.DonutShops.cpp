#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if((1.0)*a > (1.0)*c/b){
            cout << -1 << " ";
        }else{
            cout << 1 << " ";
        }
        if((1.0)*a <= (1.0)*c/b){
            cout << -1 << endl;
        }else{
            cout << b << endl;
        }
    }
}