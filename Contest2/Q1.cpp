#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int arr[n];
        priority_queue<pair<int,int>> pq;
        unordered_map<int,int> um;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            um[arr[i]]++;
        }
        for(auto val : um){
            // cout << val.first << " " << val.second << endl;
            pq.push({val.second, val.first});
        }
        int ans = 0;
        while(pq.size() > 0){
            int ele = pq.top().second;
            int count = pq.top().first;
            pq.pop();
            if(count < k){
                pq.push({count, ele});
                break;
            }else if(count > k){
                pq.push({count-k, ele});
            }
            if(!pq.empty()){
                auto topEle = pq.top();
                pq.pop();
                topEle.first = topEle.first + k - 1;
                pq.push(topEle);
            }else{
                pq.push({k-1,ele});
            }
        }
        while(!pq.empty()){
            ans += pq.top().first;
            pq.pop();
        }
        cout << ans << endl;
    }
}