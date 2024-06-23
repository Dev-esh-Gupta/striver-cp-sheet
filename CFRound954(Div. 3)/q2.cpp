#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> dir({{0,-1},{-1,0},{0,1},{1,0}});

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int matrix[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> matrix[i][j];
            }
        }
        bool flag = true;
        while(flag){
            flag = false;
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    int maxi = INT_MIN;
                    for(auto &cood : dir){
                        int new_i = i+cood[0];
                        int new_j = j+cood[1];
                        if(new_i >= 0 && new_i < n && new_j >= 0 && new_j < m){
                            maxi = max(maxi, matrix[new_i][new_j]);
                        }
                    }
                    if(maxi != INT_MIN && matrix[i][j] > maxi){
                        matrix[i][j] = maxi;
                        flag = true;
                    }
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
}