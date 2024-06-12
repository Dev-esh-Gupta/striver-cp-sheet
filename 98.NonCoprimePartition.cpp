#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n <= 2){
        cout << "No";
    }else{
        cout << "Yes" << endl;
        cout << n - 1 << " " ;
        for(int i = 1; i < n; i++){
            cout << i << " ";
        }
        cout <<endl << 1 << " ";
        cout << n;
    }
    return 0;
}