#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    int matrix[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            int val ;
            cin >> val;
            matrix[i][j] = val;
        }
    }
    bool flag = true;
    vector<vector<int>> ans(m, vector<int>(n, 0));
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            int colCount = 0, rowCount = 0;
            for(int k=0; k<n; k++){
                if(matrix[i][k] == 1) colCount++;
            }
            for(int k=0; k<m; k++){
                if(matrix[k][j] == 1) rowCount++;
            }
            if(rowCount == m && colCount == n){
                ans[i][j] = 1;
            }
        }
    }
    vector<vector<int>> comp(m, vector<int>(n, 0));

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(ans[i][j] == 1){
                for(int k=0; k<n; k++){
                    comp[i][k] = 1;
                }
                for(int k=0; k<m; k++){
                    comp[k][j] = 1;
                }
            }
        }
    }

   
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(matrix[i][j] != comp[i][j]){
                flag = false;
                break;
            }
        }
        if(!flag) break;
    }

    if(flag){
        cout << "YES" << endl;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cout << ans[i][j] << " ";
            }
            cout<< endl;
        }
    }else{
        cout << "NO";
    }
}