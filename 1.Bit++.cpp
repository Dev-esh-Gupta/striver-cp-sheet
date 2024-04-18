#include<bits/stdc++.h>
using namespace std;

// input
// 2
// ++X
// X--

int main(){
    int n;
    cin>>n;
    int x = 0;
    while(n--){
        string st ;
        cin >> st;
        if(st[1] == '+'){
            x++;
        }else{
            x--;
        }
    }
    cout << x;
}