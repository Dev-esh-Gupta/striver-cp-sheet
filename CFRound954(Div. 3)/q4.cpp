#include<bits/stdc++.h>
using namespace std;

void findMinSum(string &s, int n){
    if(n<=2){
            cout << stoi(s)<<endl;
            return;
        }
    int ans = INT_MAX;
    for(int i=0; i<n-1; i++){
        int twoDig = (s[i]-'0')*10 + (s[i+1]-'0');
        int sumExceptOne = 0;
        int mini = 9;
        int finalSum;
        for(int j=0; j<n; j++){
            if(j != i && j != i+1){
                mini = min(mini, (s[j]-'0'));
                if(s[j] != '1') sumExceptOne += (s[j] - '0');
            }
        }
        if(mini == 0){
            cout << 0 << endl;
            return;
        }
        
        if(sumExceptOne == 0){
            sumExceptOne = 1;
            finalSum = twoDig;
        }else{
            finalSum = twoDig==1?sumExceptOne:sumExceptOne + twoDig;
        }
        ans = min(ans, finalSum);
    }
    cout << ans << endl;
    return;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        findMinSum(s, n);
    }
    return 0;
}