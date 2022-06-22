#include<iostream>
using namespace std;

int main(){

    const int password = 78;
    int pass;

    do{
        cout<<"Enter password:  "<<flush;
        cin>>pass;

        if (pass != password){
            cout<<" Wrong password! \n";
        }
        
    } while (pass != password);
    
    cout<<"password accepted.\n";
    
    return 0;
}