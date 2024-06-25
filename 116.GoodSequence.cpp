// #include<bits/stdc++.h>
// using namespace std;

// vector<vector<int>> dp;

// int solve(vector<int> &a, int idx, int prev){
//     if(idx == a.size()) return 0;

//     if(prev != -1 && dp[idx][prev] != -1) return dp[idx][prev];
//     // pick
//     int pick = 0;
//     if(prev == -1 || __gcd(a[prev], a[idx]) > 1){
//         pick = 1 + solve(a, idx+1, idx);
//     }
//     //  not pick
//     int notPick = solve(a, idx+1, prev);
//     return prev != -1? dp[idx][prev] = max(pick, notPick) : max(pick, notPick);
// }

// int main(){
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     dp.resize(n+1, vector<int>(n+1, -1));
//     for(int i=0; i<n; i++){
//         cin >> a[i];
//     }
//     cout << solve(a, 0, -1);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    
    int ans = 0;
    int dp[100001] = {0}, d[100001]={0};

    for(int i=0; i<n; i++){
        int a; cin >> a;
        dp[a]=d[a]=1;
        for(int j=2; j*j<=a; j++){
            if(a%j==0){
                dp[a] = max(dp[a], d[j]+1);
                dp[a] = max(dp[a], d[a/j]+1);
            }
        }
        for(int j=2; j*j<=a; j++){
            if(a%j==0){
                d[j]=dp[a];
                d[a/j]=dp[a];
            }
        }
        ans=max(ans, dp[a]);
    }
    cout<<ans<<endl;
    return 0;
}
