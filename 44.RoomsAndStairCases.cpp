#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string layout;
        cin >> layout;
        int first1 = -1, last1 = -1;
        for(int i=0; i<n; i++){
            if(first1 == -1 && layout[i] == '1') first1 = i;
            if(layout[i] == '1') last1 = i;
        }
        if(first1 == -1 && last1 == -1){
            cout << n << endl;
        }else if(n - first1 > last1){
            cout << 2*(n - first1) << endl;
        }else{
            cout << 2*(last1+1) << endl;
        }
    }
}