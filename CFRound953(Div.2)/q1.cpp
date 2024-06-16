#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int maxPage = 0;
        int val ;
        for(int i=0; i<n-1; i++){
            cin >> val;
            maxPage = max(maxPage, val);
        }
        cin >> val;
        cout << maxPage + val << endl;
    }
}