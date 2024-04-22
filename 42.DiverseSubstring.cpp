#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    string ans = "";
    for(int i=1; i<n; i++){
        if(str[i] != str[i-1]){
            ans += str[i-1];
            ans += str[i];
            break;
        }
    }
    if(ans.length()){
        cout<<"YES"<<endl<<ans;
    }else{
        cout<<"NO";
    }
}