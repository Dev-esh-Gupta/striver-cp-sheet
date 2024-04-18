#include<bits/stdc++.h>
using namespace std;

int main(){
    int mat[5][5];
    int posI = 0;
    int posJ = 0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> mat[i][j];
            if(mat[i][j] == 1){
                posI = i;
                posJ = j;
            }
        }
    }
    cout << abs(posI - 2) + abs(posJ - 2);
}