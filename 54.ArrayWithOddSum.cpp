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
            }
        }
        if(flag) {
            if(oddCount%2 != 0) cout << "YES" << endl;
            else{
                cout <<"NO"<< endl;
            }
        }
    }
}