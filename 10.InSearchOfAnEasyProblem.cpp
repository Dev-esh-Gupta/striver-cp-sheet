#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> opinion(n);
    for(int i=0; i<n; i++){
        cin >> opinion[i];
    }
    string ans = "EASY";
    for(int i=0; i<n; i++){
        if(opinion[i] == 1){
            ans = "HARD";
            break;
        }
    }
    cout << ans;
}