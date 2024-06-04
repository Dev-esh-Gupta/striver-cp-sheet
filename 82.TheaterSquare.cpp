#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll n, m, a;
    cin >> n >> m >> a;
    ll lCount, bCount;
    lCount = (n % a == 0) ? n / a : n / a + 1;
    bCount = (m % a == 0) ? m / a : m / a + 1;
    cout << lCount * bCount;
}