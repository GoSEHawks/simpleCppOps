#include<iostream>
using namespace std;

int main(){

    int num[] = {1, 2, 3, 5};

    for (int i = 0; i < 4; i++)
    {
        cout<< num[i] << "  "<< endl;
       
    }
    cout << "size of num " << sizeof(num) << endl;
    

    return 0;
}
