#include<bits/stdc++.h>
using namespace std;

int main(){
    string start, finish;
    cin >> start >> finish;
    int finishMinute = (finish[0] - '0')*10*60 + (finish[1] - '0')*60 + (finish[3] - '0') * 10 + (finish[4] - '0');
    int startMinute = (start[0] - '0')*10*60 + (start[1] - '0')*60 + (start[3] - '0') * 10 + (start[4] - '0');
    int duration = finishMinute - startMinute;
    int middleTime = startMinute + duration/2;

    int hour = middleTime/60;
    int minute = middleTime%60;
    if(hour < 10) cout << "0";
    cout << to_string(hour) << ":"; 
    if(minute < 10) cout << "0";
    cout << to_string(minute);
}