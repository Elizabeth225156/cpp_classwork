/*
Name: Elizabeth Elden
Program Name: Time and Date Lab
Date: 3/20/26
*/

/*
Questions:
1. If it is 10AM in London. What time is it in Tokyo? What is the UTC offset?
    It is 7pm. The UTC is +9.

2. What is the UTC offset for Mountain Daylight Time?
    It is -6.
*/

#include <iostream>
#include <ctime>

using namespace std;

int main(){
    //Question 1
    time_t now = time(nullptr);
    cout << "Current time: " << ctime(&now);

    //Question 2
    int utcOffsetHours;
    cout << "Enter UTC Offset in hours: ";
    cin >> utcOffsetHours;

    now += utcOffsetHours * 3600;
    tm* timeZoneTime = gmtime(&now);

    cout << "Time in specified time zone: " << asctime(timeZoneTime);

    //Question 3
    time_t startingTime = time(nullptr);

    int answer;
    cout << "36 * 9 = ";
    cin >> answer;

    time_t endingTime = time(nullptr);
    double totalTime = difftime(endingTime, startingTime);

    cout << "Total time taken: " << totalTime << " seconds";

    return 0;
}