#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        if(n <= 2){
            cout << 1 << endl;
        }else{
            n = n - 2;
            int floor = 1;
            while(n > x){
                n = n - x;
                floor++;
            }
            cout << floor + 1 << endl;
        }
    }
}