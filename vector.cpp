#include <iostream>
#include <vector>

using namespace std;

void printGreeting(vector<string> names){
    cout << "Hello ";
    for(string name : names){
        cout << name << " ";
    }
}

int main(){
    //1
    vector<double> nums = {30.2, 50.1, 24.3, 9.4, 12.7, 90.4, 24.5, 54.5, 34.2, 8.5};
    cout << "The third number of the vector is: " << nums[2] << endl;
    nums.pop_back();
    cout << "The new array is: ";
    for(double number : nums){
        cout << number << " ";
    }
    cout << endl << endl;

    //2
    vector<int> userInput;
    int input = 0;
    bool keepGoing = true;
    string userChoice = "";
    while(keepGoing){
        cout << "Integer to add: ";
        cin >> input;
        userInput.push_back(input);
        cout << "Full vector is: ";
        for(int num : userInput){
            cout << num << " ";
        }
        cout << endl << "Current size is: " << userInput.size() << endl;
        cout << "Keep entering? (true/false): ";
        cin >> userChoice;
        if(userChoice == "true"){
            keepGoing = true;
        } else {
            keepGoing = false;
        }
    }
    cout << endl << endl;

    //3
    vector<string> color;
    string favColor = "";
    keepGoing = true;
    while(keepGoing){
        cout << "Enter favorite color: ";
        cin >> favColor;
        color.push_back(favColor);
        cout << "Keep going? (true/false): ";
        cin >> userChoice;
        if(userChoice == "true"){
            keepGoing = true;
        } else {
            keepGoing = false;
        }
    }
    cout << "Favorite colors: ";
    for(string fav : color){
        cout << fav << " ";
    }
    cout << endl << endl;

    //4
    vector<string> nameList;
    int numNames = 0;
    string name = "";
    cout << "Enter number of names: ";
    cin >> numNames;
    for(int i = 0; i < numNames; i ++){
        cout << "Enter name " << i + 1 << ": ";
        cin >> name;
        nameList.push_back(name);
    }
    printGreeting(nameList);
    return 0;
}