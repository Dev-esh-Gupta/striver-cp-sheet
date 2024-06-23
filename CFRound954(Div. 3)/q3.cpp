#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        int ind[m];
        for(int i=0; i<m; i++){
            cin >> ind[i];
        }
        string c;
        cin >> c;
        priority_queue<char, vector<char>, greater<int>> pq;
        for(auto &ch : c){
            pq.push(ch);
        }
        sort(ind, ind+m);
        for(int i=0; i<m; i++){
            if(i != m-1 && ind[i] == ind[i+1]) continue;
            else{
                s[ind[i]-1] = pq.top();
                pq.pop();
            }
        }
        cout << s << endl;
    }
}