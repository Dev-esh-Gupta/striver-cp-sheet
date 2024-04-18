#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    unordered_set<char> us;
    cin >> str;
    for(auto ch : str){
        us.insert(ch);
    }
    if(us.size() % 2 == 1){
        cout << "IGNORE HIM!";
    }else{
        cout << "CHAT WITH HER!";
    }

}