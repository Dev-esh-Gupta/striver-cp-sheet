#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k ;
    vector<pair<int,int>> time;
    for(int i=1; i<=n; i++){
        int day;
        cin >> day;
        time.push_back({day, i});
    }
    sort(time.begin(), time.end());
    int i = 0;
    vector<int> ans;
    while(k > 0 && i < n){
        k = k - time[i].first;
        if(k >= 0){
            ans.push_back(time[i].second);
        }
        i++;
    }
    if(ans.size()){
        cout << ans.size() << endl;
        for(int i=0; i<ans.size(); i++){
            cout << ans[i] << " ";
        }
    }else{
        cout << 0;
    }

}