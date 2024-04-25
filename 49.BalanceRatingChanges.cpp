#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    bool increase = true;
    while(n--){
        int b;
        cin >> b;
        if(b%2 == 0){
            cout << b/2 << endl;
        }else{
            if(increase){
                cout << floor(((1.0)*b)/2) << endl;
                increase = false;
            }else{
                cout << ceil(((1.0)*b)/2) << endl;
                increase = true;
            }
        }
    }
}