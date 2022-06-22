#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name,adrress,phoneNumber;
    string name1,adrress1,phoneNumber1;

//get info one
    cout<<"\nWhat is your name? \n";
    getline(cin,name);
    cout<<"\nwhat is your address? \n";
    getline(cin, adrress);
    cout<<"\nWhat is your phone number? ";
    getline(cin,phoneNumber);
    
// get info two
    cout<<"\nWhat is your name? \n";
    getline(cin,name1);
    cout<<"\nwhat is your address? \n";
    getline(cin, adrress1);
    cout<<"\nWhat is your phone number? ";
    getline(cin,phoneNumber1);

    cout<<endl;
    
//print a message to the user
    cout<<"\n\n"<<name<<"\n";
    cout<<"\t\t"<<adrress<<"\n";
    cout<<"\t\t"<<phoneNumber<<"\n";
    
    cout<<"\n\n"<<name1<<"\n";
    cout<<"\t\t"<<adrress1<<"\n";
    cout<<"\t\t"<<phoneNumber1<<"\n";
    
    
    return 0;
}