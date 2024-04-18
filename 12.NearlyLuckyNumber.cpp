#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    int count = 0;
    while(n){
        int lastDigit = n%10;
        if(lastDigit == 7 || lastDigit == 4){
            count++;
        }
        n /= 10;
    }
    if(count == 4 || count == 7){
        cout << "YES";
    }else{
        cout << "NO";
    }
}