#include <iostream>
#include <cmath>

using namespace std;

int main(){
    cout << "PROBLEM ONE" << endl;
    cout << "The average temperature in New York City is 45 degrees Fahrenheit. On a particular day, the temperature changes up and down by 5 degrees. What are the minimum and maximum temperatures?" << endl;
    int avgTemp = 45;
    int upChange = 5;
    int downChange = -5;
    int low = avgTemp - abs(downChange);
    int high = avgTemp + abs(upChange);
    cout << "Low: " << low << "\nhigh: " << high << endl << endl;

    cout << "PROBLEM TWO" << endl;
    cout << "The tide at the beach runs a cycle every 60 minutes. The water line shifts a total of 79 feet. After 70 minutes, how high is the line of the water?" << endl;
    double height = 39.5 * sin(10) + 39.5;
    cout << "The height is: " << height << endl << endl;

    cout << "PROBLEM THREE" << endl;
    cout << "A cat is standing 45 feet from a fire hydrant and a dog is standing 32 feet from it. The lines form a right triangle. How far away are the dog and cat from each other?" << endl;
    double legOne = 45;
    double legTwo = 32;
    double hypotenuse = hypot(legOne, legTwo);
    cout << "They are " << hypotenuse << " feet away from each other";

    return 0;
}
