#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x, y;
    cin >> n >> x >> y;
    int rains[n];
    int ans;
    for(int i=0; i<n; i++){
        cin >> rains[i];
    }
    for(int i=0; i<n; i++){
        int start;
        if(i - x < 0){
            start = 0;
        }else{
            start = i - x;
        }
        int end;
        if(i + y >= n){
            end = n - 1;
        }else{
            end = i + y;
        }
        bool flag = true;
        for(int j=start; j<=end; j++){
            if(j != i){
                if(rains[j] < rains[i]){
                    flag = false;
                    break;
                }
            }
        }
        if(flag){
            ans = i + 1;
            break;
        }
    }
    cout << ans;
}