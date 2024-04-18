#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string encript ;
    cin >> encript;
    string ans = "";
    int j = 1;
    for(int i=0; i<n; i+=j){
        ans += encript[i];
        j++;
    }
    cout<<ans;
}