#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n <= 2){
        cout << "No";
    }else{
        cout << "Yes" << endl;
        if(n%2 == 0){
            cout << n - 1 << " " << 1 << endl;
        }else{
            cout << n/2 << " " << n - n/2 << endl;
        }
        for(int i = 1; i <= n; i++){
            cout << i << " ";
        }
    }
    return 0;
}