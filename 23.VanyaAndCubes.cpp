#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int height = 0;
    int i = 1;
    int cubeRequire = 0;
    while(n > 0){
        cubeRequire += i;
        if(cubeRequire <= n) height++;
        i++;
        n = n - cubeRequire;
    }
    cout << height;
}