#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int len = s.length();
    if(len % 2 == 0) cout << len/2;
    else{
        int oneCount = 0;
        int i = 0;
        while(i < len){
            if(s[i] == '1') oneCount++;
            i++;
        }
        if(oneCount > 1) cout << len/2 + 1;
        else cout << len/2;
    }
}
