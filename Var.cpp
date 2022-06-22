#include <iostream>
using namespace std;

int main() {
    int fish = 2;
    int birds = 4;
    string brag = "i have:  ";
    int pets = fish + birds;
    cout << brag <<fish<<" fish\n";
    cout << brag <<birds<< " birds\n";
    cout << brag <<pets<< " pets \n";
    cout << "enter your age:  ";
    string input;
    cin >> input;
    cout << "you enterd:  "<< input;
    return 0;
};
