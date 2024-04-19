#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin >> k;
    string s;
    cin >> s;
    int arr[26] = {0};
    string ans = "";
    for(int i=0; i<s.length(); i++){
        arr[s[i] - 'a']++;
    }
    for(int i=0; i<26; i++){
        if(arr[i] != 0 && arr[i]%k == 0){
            int times = arr[i]/k;
            while(times--)
                ans += (i + 'a');
        }else if(arr[i]  != 0){
            ans = "-1";
            break;
        }
    }
    if(ans == "-1"){
        cout << ans;
    }else{
        string temp = ans;
        while(--k){
            ans += temp;
        }
        cout << ans;
    }
}