#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int gap = n;
    int run = 1;
    for(int i=0; i<2*n+1; i++){
        // space printing
        if(i <= n){
            int j = run;
            for(int k=0; k<gap; k++){
                cout << "  ";
            }
            for(int k=0; k<(i+1); k++){
                cout << k;
                if(i != 0) cout << " ";
                j--;
            }
            while(j != 0){
                j--;
                cout << j ;
                if(j != 0) cout  << " ";

            }
            // while()
            if(i != n){
                gap--;
                run += 2;
            }
            cout << endl;
        }else{
            gap++;
            run -= 2;
            int j = run;
            for(int k=0; k<gap; k++){
                cout << "  ";
            }
            for(int k=0; k<run/2; k++){
                cout << k ;
                j--;
                if(j != 0) cout << " ";
            }
            while(j != 0){
                j--;
                cout << j ;
                if(j != 0) cout  << " ";
            }
            cout << endl;
        }
    }
}