#include<bits/stdc++.h>
using namespace std;

int findHCF(int s, int t){
    if(s > t) swap(s,t);
    while(t%s != 0){
        int rem = t % s;
        t = s;
        s = rem;
    }
    return s;
}

int main(){
    int q;
    cin >> q;
    while(q--){
        string s, t;
        cin >> s >> t;
        int m = s.length(), n = t.length();
        
        int hcf = findHCF(m, n);
        int lcm = (m * n)/hcf;

        string res1 = "", res2 = "";
        while(res1.length() != lcm){
            res1 += s;
        }
        while(res2.length() != lcm){
            res2 += t;
        }
        if(res1 == res2){
            cout << res1 << endl;
        }else{
            cout << -1 << endl;
        }
    }
    return 0;
}