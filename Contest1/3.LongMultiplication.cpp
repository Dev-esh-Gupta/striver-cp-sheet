#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string x, y;
        cin >> x >> y;
        string xCopy = x;
        string yCopy = y;
        if(xCopy > yCopy){
            for(int i=0; i<)
        }
    }
}

t = int(input())

while t:
    x = input()
    y = input()
    xCopy = x
    yCopy = y
    if xCopy > yCopy:
        for i in range(1, len(xCopy)):
            if xCopy[i] > yCopy[i]:
                temp = xCopy[i]
                xCopy[i] = yCopy[i]
                yCopy[i] = temp
    else:
        for i in range(1, len(x)):
            if y[i] > x[i]:
                temp = x[i]
                x[i] = y[i]
                y[i] = temp

    print(x,y,xCopy,yCopy)
