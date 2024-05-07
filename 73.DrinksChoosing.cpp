#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int favDrink[n];
    unordered_map<int,int> count;
    for(int i=0; i<n; i++){
        cin >> favDrink[i];
        count[favDrink[i]]++;
    }
    int oddCount = 0;
    for(auto &val : count){
        if(val.second % 2 != 0) oddCount++;
    }
    if(n % 2 != 0) oddCount--;
    cout << n - (oddCount/2);
}