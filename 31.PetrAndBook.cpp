#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int pages[7];
    for(int i=0; i<7; i++){
        cin >> pages[i];
    }
    int j = 0;
    while(n > 0){
        n -= pages[j];
        j = (j+1)%7;
    }
    if(j == 0) cout << 7;
    else cout << j;    
}