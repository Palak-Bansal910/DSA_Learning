#include<iostream>
using namespace std;

int findAngle(int hour, int minute){
    if(hour < 0 || hour > 12 || minute < 0 || minute > 60){
        cout << "Invalid input." << endl;
        return -1;
    }
    int minuteAngle = 6 * minute;
    int hourAngle = 30 * hour + (minute / 2);
    int angle = abs(hourAngle - minuteAngle);
    if(angle > 180){
        angle = 360 -angle;
    }
    return angle;
}
int main(){
    int hour, minute;
    cout << "Enter the hour: ";
    cin >> hour;
    cout << "Enter the minute: ";
    cin >> minute;
    cout << "The angle between the hour and minute hands is: " << findAngle(hour, minute) << " degrees." << endl;
    return 0;
}