#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        int sum = a + b + c + n;
        if(sum%3 != 0){
            cout << "NO" << endl;
        }else{
            int each = sum / 3;
            if(a > each || b > each || c > each){
                cout << "NO" << endl;
            }else{
                cout << "YES" << endl;
            }
        }
    }
}