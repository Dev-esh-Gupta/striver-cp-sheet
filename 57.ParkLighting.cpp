#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int area = n * m;
        if(area%2 == 0){
            cout << area/2 << endl;
        }else{
            cout << area / 2 + 1 << endl;
        }
    }
}