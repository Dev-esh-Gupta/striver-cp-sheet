#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> ele;
        for(int i=0; i<2*n; i++){
            int num;
            cin >> num;
            ele.push_back(num);
        }
        sort(ele.begin(), ele.end());
        cout << abs(ele[n-1] - ele[n]) << endl;
    }
}