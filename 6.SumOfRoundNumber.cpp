#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        vector<int> vec;
        int val = 1;
        while(x){
            int ele = (x%10) * val;
            if (ele != 0)
                vec.push_back(ele);
            val *= 10;
            x /= 10;
        }   
        cout << vec.size() << endl;
        for(auto v : vec){
            cout << v << " ";
        }
    }
}