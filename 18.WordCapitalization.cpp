#include<bits/stdc++.h>
using namespace std;

int main(){
    string name;
    cin >> name;
    if(name[0] >= 'a' && name[0] <= 'z'){
        name[0] = name[0] - 'a' + 'A';
    }
    cout << name;
}