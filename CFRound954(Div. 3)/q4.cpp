#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        if(n <= 2){
            cout << s << endl;
        }else{
            bool flag = false;
            int sum = 0;
            for(auto &ch : s){
                if(ch == '0'){
                    flag = true;
                }
                sum += (ch - '0');
            }
            if(flag){
                cout << 0 << endl;
                break;
            }else{
                int mini = 99;
                for(int i=0; i<n-1; i++){
                    int num = (s[i]-'0')*10 + (s[i+1]-'0');
                    mini = min(num, mini);
                }
                if(mini == 11){
                    cout << mini << endl;
                }else{
                    cout << sum + mini - (mini%10) - (mini/10) << endl;
                }
            }

        }
    }
}