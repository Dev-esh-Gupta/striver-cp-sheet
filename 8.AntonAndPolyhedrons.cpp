#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> polygons(n);
    for(int i=0; i<n; i++){
        cin >> polygons[i] ;
    }
    int ans = 0;
    for(auto &ele : polygons){
        if(ele == "Tetrahedron"){
            ans += 4;
        }else if(ele == "Cube"){
            ans += 6;
        }else if(ele == "Octahedron"){
            ans += 8;
        }else if(ele == "Dodecahedron"){
            ans += 12;
        }else{
            ans += 20;
        }
    }
    cout << ans;
}