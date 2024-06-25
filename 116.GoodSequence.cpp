#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> dp;

int solve(vector<int> &a, int idx, int prev){
    if(idx == a.size()) return 0;

    if(prev != -1 && dp[idx][prev] != -1) return dp[idx][prev];
    // pick
    int pick = 0;
    if(prev == -1 || __gcd(a[prev], a[idx]) > 1){
        pick = 1 + solve(a, idx+1, idx);
    }
    //  not pick
    int notPick = solve(a, idx+1, prev);
    return prev != -1? dp[idx][prev] = max(pick, notPick) : max(pick, notPick);
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    dp.resize(n+1, vector<int>(n+1, -1));
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cout << solve(a, 0, -1);
    return 0;
}