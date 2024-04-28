#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        bool flag = true;
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int oddCount = 0;
        int evenCount = 0;
        for(int i=0; i<n; i++){
            if(arr[i]%2 == 0) evenCount++;
            else oddCount++;
            if(evenCount && oddCount){
                cout << "YES" << endl;
                flag = false;
                break;
            }
        }
        if(flag) {
            if(evenCount == n) cout << "NO" << endl;
            else if(oddCount%2 == 0) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    }
}