#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<char>> snake(n, vector<char>(m,'.'));
    bool flag = true;
    for(int i=0; i<n; i++){
        if(i%2 == 0){
            for(int j=0; j<m; j++){
                snake[i][j] = '#';
            }
        }else{
            if(flag){
                snake[i][m-1] = '#';
                flag = false;
            }else{
                snake[i][0] = '#';
                flag = true;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << snake[i][j];
        }
        cout<<endl;
    }
}