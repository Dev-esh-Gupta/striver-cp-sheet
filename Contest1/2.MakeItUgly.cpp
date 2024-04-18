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
        int minCount = INT_MAX;
        int count = 1;
        int ele = arr[0];
        for(int i=1; i<=n; i++){
            if(i == n){
                minCount = min(minCount, count);
            }else
            if(arr[i] == ele){
                count++;
            }else{
                minCount = min(minCount, count);
                count = 0;
            }
        }
        if(minCount == n){
            cout << -1 << endl;
        }else{
            cout << minCount << endl;
        }
    }
}