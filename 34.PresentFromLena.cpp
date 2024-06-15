#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=1; i<=2*n+1; i++){
        // space printing
        for(int j=0; j<i; j++){
            cout << j%(n+1) << " ";
        }
        cout << endl;
    }
}