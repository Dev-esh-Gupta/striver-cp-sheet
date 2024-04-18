#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int heights[n];
    for(int i=0; i<n; i++){
        cin >> heights[i];
    }
    pair<int,int> min_element = {INT_MAX,-1};
    pair<int,int> max_element = {INT_MIN,-1};
    for(int i=0; i<n; i++){
        if(min_element.first >= heights[i]){
            min_element.first = heights[i];
            min_element.second = i;
        }
        if(max_element.first < heights[i]){
            max_element.first = heights[i];
            max_element.second = i;
        }
    }
    int ans = 0;
    if(min_element.second < max_element.second){
        ans = max_element.second + (n - min_element.second - 1) - 1;
    }else{
        ans = max_element.second + (n - min_element.second - 1);
    }
    cout << ans;
}