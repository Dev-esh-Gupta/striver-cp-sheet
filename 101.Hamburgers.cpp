#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    string receipe;
    cin >> receipe;
    int nb, ns, nc;
    cin >> nb >> ns >> nc;
    int pb, ps, pc;
    cin >> pb >> ps >> pc;
    ll r;
    cin >> r;
    ll b = 0, s = 0, c = 0;
    for(auto &ch : receipe){
        if(ch == 'B') b++;
        else if(ch == 'S') s++;
        else c++;
    }
    ll totalHamburger =  0;
    ll lower = 0;
    ll higher = r+200;
    while(lower <= higher){
        ll mid = lower + (higher-lower)/2;
        // 
        ll z = 0;
        ll r1 = max(b*mid-nb, z);
        ll r2 = max(s*mid-ns, z);
        ll r3 = max(c*mid-nc, z);
        ll costNeeded = r1*pb + r2*ps + r3*pc;
        if(r >= costNeeded){
            lower = mid+1;
            totalHamburger = mid;
        }else{
            higher = mid - 1;
        }
    }
    cout << totalHamburger;
}