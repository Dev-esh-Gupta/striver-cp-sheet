#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector<ll> ele;
    for(int i=0; i<n; i++){
        ll val;
        cin >> val;
        ele.push_back(val);
    }
    sort(ele.begin(), ele.end());
    if(ele[n-2] + ele[n-3] <= ele[n-1]) cout << "NO" << endl;
    else{
        cout << "YES" << endl;
        cout << ele[n-1] << " ";
        for(int i=n-3; i>=0; i--) cout << ele[i] << " ";
        cout << ele[n-2] <<endl;
    }
    return 0;
}