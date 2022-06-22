#include<iostream>
using namespace std;

int main(){

    int values[3] = {1,2,3};
    

    cout<< values[0]<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<< "array: "<< i << ": "<< values[i]<< endl;
    }
    


 
    return 0;
}