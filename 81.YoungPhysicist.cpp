#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> ans(3,0);
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            int val ;
            cin >> val;
            ans[j] += val;
        }
    }
    if(ans[0] == 0 and ans[1] == 0 and ans[2] == 0){
        cout << "YES";
    }else{
        cout << "NO";
    }
}