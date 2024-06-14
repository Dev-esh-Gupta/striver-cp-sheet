#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int minChange = 0;
        vector<vector<char>> belt(n, vector<char>(m, 'C'));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                char ch;
                cin >> ch;
                belt[i][j] = ch;
            }
        }
        for(int j=0; j<m-1; j++){
            if(belt[n-1][j] == 'D') minChange++;
        }
        for(int i=0; i<n-1; i++){
            if(belt[i][m-1] == 'R') minChange++;
        }
        cout << minChange << endl;
    }
}