#include<iostream>
using namespace std;
int main(){

    string password = "hello";
    cout<< "Enter your password > "<<flush;

    string input;
    cin >> input;

    if(input == password){
        cout<<"password currect";
    }
    if (input != password)
    {
        cout<<"wrong password";
    }
    
    return 0;
    
}