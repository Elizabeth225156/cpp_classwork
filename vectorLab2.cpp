#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<string> catNames = {"Jeffry", "Elon", "Lucky", "Lucy", "Winifred", "Mandy"}; //create the initial vector
    cout << "Initial Vector:";
    for(auto name = catNames.begin(); name != catNames.end(); name ++){
        cout << " " << *name;
    }
    cout << endl << endl;

    //add Whiskers after lucy
    catNames.insert(catNames.begin() + 4, "Whiskers");
    cout << "Vector with Whiskers:";
    for(auto name = catNames.begin(); name != catNames.end(); name ++){
        cout << " " << *name;
    }
    cout << endl << endl;

    //removing Winifred
    catNames.erase(catNames.begin() + 5);
    cout << "Vector without Winifred:";
    for(auto name = catNames.begin(); name != catNames.end(); name ++){
        cout << " " << *name;
    }
    cout << endl << endl;

    //tell user the first and last names
    string front = catNames.front();
    string back = catNames.back();
    cout << "The first name is: " << front << endl;
    cout << "The last name is: " << back << endl;

    return 0;
}
