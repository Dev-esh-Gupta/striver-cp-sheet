#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '.'));
        int maxi = 0;
        int row = 0;
        for(int i=0; i<n; i++){
            int count = 0;
            for(int j=0; j<m; j++){
                char ch;
                cin >> ch;
                grid[i][j] = ch;
                if(ch == '#') count++;
            }
            if(count > maxi){
                row = i;
                maxi = count;
            }
        }
        int col = 0;
        for(int j=0; j<m; j++){
            if(grid[row][j] == '#'){
                col = j;
                break;
            }
        }
        col = col + maxi/2;
        cout << row + 1 << " " << col + 1 << endl;
    }
}