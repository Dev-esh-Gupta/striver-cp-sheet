#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        string problems;
        cin >> problems;
        vector<int> cnt(7,0);
        for(int i=0; i<n; i++){
            cnt[problems[i] - 'A']++;
        }
        int ans = 0;
        for(int i=0; i<7; i++){
            if(cnt[i] < m){
                ans += m - cnt[i];
            }
        }
        cout << ans;
    }
}