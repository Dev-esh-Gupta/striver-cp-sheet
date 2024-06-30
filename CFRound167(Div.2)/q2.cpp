#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        // forward check
        int i = 0, j = 0;
        int ans = INT_MAX;
        for(int i=0; i<b.length(); i++){
            int len = 0;
            int t = i;
            for(int j=0; j<a.length(); j++){
                if(t < b.length() && a[j] == b[t]){
                    t++;
                    len++;
                }
                int minPoss = a.length() + (b.length() - len);
                ans = min(ans, minPoss);
            }
        }
        cout << ans << endl;
    }
}