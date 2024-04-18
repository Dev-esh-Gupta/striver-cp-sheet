#include<iostream>
using namespace std;

int main(){
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int ans = 0;
    if(x1 > x2){
        if(x1 > x3){
            if(x2 > x3){
                ans = x1 - x3;
            }else{
                ans = x1 - x2;
            }
        }else{
            ans = x3 - x2;
        }
    }else{
        if(x2 > x3){
            if(x3 > x1){
                ans = x2 - x1;
            }else{
                ans = x2 - x3;
            }
        }else{
            ans = x3 - x1;
        }
    }
    cout << ans;
}