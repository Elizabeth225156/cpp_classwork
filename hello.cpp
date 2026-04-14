#include <iostream>
#include <algorithm>
#include <cctype>
#include <random>

using namespace std;

void toLowerCase(string& phrase){
    transform(phrase.begin(), phrase.end(), phrase.begin(),[](unsigned char c){ return tolower(c); });
}

void multiply(int& x){
    x *= 2;
}

int addRandom(int x){
    random_device rd;  
    mt19937 gen(rd()); 
    uniform_int_distribution<> distrib(1, 100);
    x += distrib(gen);
    return x;
}

int main(){
    string upperCase = "FDJLKSJFLKSDJFLKSDJFLKSDJFLKSHBKDHGNFHKJLWVHILJWKSh";
    toLowerCase(upperCase);
    cout << upperCase << endl;

    int val = 4;
    multiply(val);
    cout << val << endl;

    int num = 2;
    int newNum = addRandom(num);
    cout << "new num: " << newNum << endl;

    return 0;
}