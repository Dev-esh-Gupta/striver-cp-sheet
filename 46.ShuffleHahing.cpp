#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string p, h;
        cin >> p >> h;
        int count[26] = {0};
        int i = 0, j = p.size() - 1;
        for(int i=0; i<=j; i++){
            count[p[i]-'a']++;
            count[h[i]-'a']--;
        }
        bool flag = true;
        while(j < h.size()){
            int k;
            for(k=0; k<26; k++){
                if(count[k] != 0){
                    break;
                }
            }
            if(k == 26){
                cout << "YES" << endl;
                flag = false;
                break;
            }
            count[h[++j] - 'a']--;
            count[h[i++] - 'a']++;
        }
        if(flag) cout << "NO" << endl;
    }
}