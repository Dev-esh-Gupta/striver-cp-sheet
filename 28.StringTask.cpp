#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    string ans = "";
    int n = str.size();
    for(int i=0; i<n; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y' ||
        str[i] == 'A' || str[i] =='E' || str[i] == 'O' || str[i] == 'I' || str[i] == 'U' || str[i] == 'Y'){
            continue;
        }else{
            ans += '.' ;
            ans += (char)tolower(str[i]);
        }
    }
    cout << ans;
}