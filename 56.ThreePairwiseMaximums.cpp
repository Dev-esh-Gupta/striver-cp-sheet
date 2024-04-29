#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y, z;
        cin >> x >> y >> z;
        if(x != y && y != z && x != z){
            cout << "NO" << endl;
        }else if(((x == y) && z > x) || ((y == z) && x > y) || ((z == x) && y > x)){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
            if(x == y && y == z && x == z){
                cout << x << " " << y << " " << z <<endl;
            }else{
                if(x > y){
                    cout << x << " " << y << " " << y << endl;
                }else if(y > z){
                    cout << y << " " << z << " " << z << endl;
                }else if(z > x){
                    cout << z << " " << x << " " << x << endl;
                }else{
                    cout << x << " " << z << " " << z << endl;
                }
            }
        }
    }
}