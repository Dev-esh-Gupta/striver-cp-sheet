#include<iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    int ans = 0;
    int mul = 1;
    while(x){
        int val = x%10;
        if(x/10 == 0 && val == 9){
            ans += 9*mul;
        }else{
            ans += (val>9-val?9-val:val)*mul;
        }
        mul *= 10;
        x /= 10;
    }
    cout << ans;
}