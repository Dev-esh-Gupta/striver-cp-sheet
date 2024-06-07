#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int r, g, b, w;
        cin >> r >> g >> b >> w;
        int oddCount = 0;
        if(r%2 != 0) oddCount++;
        if(g%2 != 0) oddCount++;
        if(b%2 != 0) oddCount++;
        if(w%2 != 0) oddCount++;
        if(oddCount == 2 || ((r == 0 || g == 0 || b == 0) && oddCount == 3)){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
        }
    }
}