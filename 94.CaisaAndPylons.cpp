#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> heights;
    heights.push_back(0);
    for(int i=0; i<n; i++){
        int val;
        cin >> val;
        heights.push_back(val);
    }
    int ans = 0;
    int currEnergy = 0;
    for(int i=1; i<=n; i++){
        currEnergy += (heights[i-1] - heights[i]);
        if(currEnergy < 0) ans += abs(currEnergy), currEnergy = 0;
    }
    cout << ans;
}