#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int oddCount = 0;
        int evenCount = 0;
        for(int i=0; i<n; i++){
            if(arr[i]%2 == 0) evenCount++;
            else oddCount++;
        }
        if(n%2 == 0){
            if(oddCount != evenCount){
                cout << -1 << endl;
            }else{
                int mis = 0;
                for(int i=0; i<n; i++){
                    if(i%2 != arr[i]%2) mis++;
                }
                cout << mis / 2 << endl;
            }
        }else{
            if(oddCount + 1 == evenCount || evenCount + 1 == evenCount){
                int mis = 0;
                for(int i=0; i<n; i++){
                    if(i%2 != arr[i]%2) mis++;
                }
                cout << mis / 2 << endl;
            }else{
                cout << -1 << endl;
            }
        }
    }
}