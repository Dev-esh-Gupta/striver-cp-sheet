#include<iostream>
using namespace std;

int main(){
    int n, t;
    cin >> n >> t;
    int arr[n-1];
    for(int i=0; i<n-1; i++){
        cin >> arr[i];
    }
    int i = 1;
    while(i < t){
        i += arr[i-1];
    }
    if(i == t){
        cout << "YES";
    }else{
        cout << "NO";
    }
} 