#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        ll max_manhattan = (n*(n-1))/2;

        if(k > max_manhattan){
            cout << "No" << endl;
            continue;
        }

        vector<int> p(n);
        for(int i=0; i<n; i++){
            p[i] = i+1;
        }

        if(k == 0){
            cout << "Yes" << endl;
            for(int i=0; i<n; i++){
                cout << p[i] << " ";
            }
            cout << endl;
            continue;
        }
        ll current_val = 0;
        for(int i=0; i<n; i++){
            if(current_val == k) break;
            int max_increase = (n - 1 - i);
            if(current_val + max_increase <= k){
                current_val += max_increase;
                swap(p[i], p[n-1]);
            }else{
                swap(p[i], p[i + (k - current_val)]);
                current_val = k;
            }
        }
        cout << "Yes" << endl;
        for(int i=0; i<n; i++){
            cout << p[i] << " ";
        }
        cout << endl;
    }
}