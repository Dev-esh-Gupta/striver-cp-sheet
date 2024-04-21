#include<bits/stdc++.h>
using namespace std;
 
int main(){
	string s;
	cin >> s;
	int n = s.length();
	string temp = s;
	bool flag = true;
	for(int i=0; i<n; i++){
		if(i == 0 && s[i] >= 'a' && s[i] <= 'z'){
			s[i] = (s[i] - 'a' + 'A');
		}else if(s[i] >= 'A' && s[i] <= 'Z'){
			s[i] = (s[i] - 'A' + 'a');
		}else{
		    flag = false;
		    break;
		}
	}
	if(flag) cout << s;
	else cout << temp;
}