// Wrong answer submitted ... I should try it again

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int x = b;
        int y = c;
        int z = min(c+1, d);
        cout << x << " " << y << " "  << z << " " << endl;
    }
}