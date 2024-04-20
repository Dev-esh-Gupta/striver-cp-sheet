#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    if(m%n != 0){
        cout << -1;
    }else{
        int count = 0;
        int mul = m / n;
        while(mul%3 == 0){
            count++;
            mul /= 3;
        }
        while(mul%2 == 0){
            count++;
            mul /= 2;
        }
        if(mul != 1) cout << -1;
        else cout << count;
    }
}