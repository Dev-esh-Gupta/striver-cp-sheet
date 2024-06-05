#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    double H, L;
    cin >> H >> L;
    double ans = ((1.0)*(L*L - H*H))/(2*H);
    cout << fixed 
         << setprecision( 
                numeric_limits<double>::max_digits10) 
         << ((1.0)*(L*L - H*H))/(2*H);
}