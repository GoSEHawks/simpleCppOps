#include<iostream>
using namespace std;

void mainMenue(){

    cout<<" 1. quit "<< endl;
    cout<<" 2. searching"<< endl;
    cout<<" 3. value"<< endl;

    cout<<" Enter a selection:  "<< flush;
}
int getInput(){

     int input;
     cin >>input;

    return input;
     }

void processInput(int option){

     switch (option)
     {
     case 1:
         cout<< " quitting "<< endl;
         break;
     case 2:
         cout<< " searching "<< endl;
         break;
     case 3:
         cout<< " you enterd 3"<< endl;
         break;
     
     default:
        cout <<"ERROR:: "<< option << " ::Invalid option"<< endl;
     }
}
int main(){

    mainMenue();
    int selection = getInput();
    processInput(selection);
    
    return 0;
}