#include<bits/stdc++.h>
using namespace std;

int main(){
    string statement;
    cin >> statement;
    int count_1 = 0, count_2 = 0, count_3 = 0;
    for(int i=0; i<statement.length(); i += 2){
        if(statement[i] == '1') count_1++;
        else if(statement[i] == '2') count_2++;
        else count_3++;
    }
    string ans = "";
    while(count_1){
        ans += "+1";
        count_1--;
    }
    while(count_2){
        ans += "+2";
        count_2--;
    }
    while(count_3){
        ans += "+3";
        count_3--;
    }
    ans = ans.substr(1);
    cout<<ans;
}