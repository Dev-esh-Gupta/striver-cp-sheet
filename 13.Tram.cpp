#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int maxCount = 0;
    int count = 0;
    while(n--){
        int deboard, board;
        cin >> deboard >> board;
        count += board - deboard;
        maxCount = max(maxCount, count);
    }
    cout << maxCount;
}