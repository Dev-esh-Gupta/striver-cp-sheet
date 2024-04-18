#include<iostream>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int drink = k * l;
    int limeSlice = c * d;
    int drinkPossible = drink / nl;
    int saltPossible = p / np;
    int ans = min(drinkPossible, min(limeSlice, saltPossible))/n;
    cout << ans ;
}