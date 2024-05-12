#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;
    while(n--){
        string num;
        cin >> num;
        bool zero = false;
        ll sum = 0, even = 0;
        for(int i=0; i<num.size(); i++){
            int x = num[i] - '0';
            if(x == 0) zero = true;
            if(x%2 == 0) even++;
            sum += x;
        }
        if(sum%3 == 0 and even > 1 and zero) cout << "red" << endl;
        else cout << "cyan" << endl;
    }
}