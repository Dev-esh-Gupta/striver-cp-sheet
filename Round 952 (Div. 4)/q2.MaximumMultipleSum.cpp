#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans = 0;
        int currSum = 0;
        for(int i=2; i<=n; i++){
            int mul = n/i;
            int sum = i*((mul*(mul+1))/2);
            if(sum > currSum){
                ans = i;
                currSum = sum;
            }
        }
        cout << ans << endl;
    }
}