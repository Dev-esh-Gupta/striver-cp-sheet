#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.length();
        int ans = 0;
        int i = 0;
        while(i<n && s[i] != '1') i++;
        int j = n - 1;
        while(j>=0 && s[j] != '1') j--;
        for(int k=i; k<=j; k++){
            if(s[k] == '0') ans++;
        }
        cout << ans << endl;        
    }
}