#include<iostream>
using namespace std;

int main(){

cout <<"1. \tadd new record"<<endl;
cout <<"2. \tdelete record"<<endl;
cout <<"3. \tview record"<<endl;
cout <<"4. \tsearch record"<<endl;
cout <<"5. \tquit"<<endl;

cout << "enter your selection > "<<flush;

int value;
cin>> value;

if (value == 5){
    cout << "appliation quitting..." << flush;
}
else if(value < 5)
{
    cout << "ERROR:::insufficient privileges"<< endl;

}
if (value > 5)
{
    cout << "ERROR:::option is unavalible"<< endl;
}

return 0;
}