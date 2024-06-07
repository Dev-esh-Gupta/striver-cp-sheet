#include<bits/stdc++.h>
using namespace std;

string reverse(string s){
    int i = 0;
    int j = s.length() - 1;
    while(i < j){
        swap(s[i], s[j]);
        i++; j--;
    }
    return s;
}

int main(){
    string n;
    cin >> n;
    cout << n + reverse(n);
}