#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string str ;
        cin >> str;
        int i = 0;
        int j = n - 1 ;
        string ans = "YES";
        while(i <= j){
            char x = str[i], y=str[j];
            char p1 = (x=='a')?'1':x-1;
            char p2 = (y=='a')?'1':y-1;
            char n1 = (x=='z')?'2':x+1;
            char n2 = (y=='z')?'2':y+1;
            if(p1==p2 || p1==n2) i++, j--;
            else if(p2==n1||p2==p1) i++, j--;
            else{
                ans = "NO";
                break;
            }
        }
        cout << ans << endl;
    }
}