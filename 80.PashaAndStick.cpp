#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll n;
    cin >> n;
    if(n % 2){
        cout << 0 ;
    }else{
    ll check = n / 2;
    if(check == 0){
        cout << 0;
    }else
    if(check % 2 == 0){
        cout << check / 2 - 1;
    }else{
        cout << check / 2;
    }
    }
}