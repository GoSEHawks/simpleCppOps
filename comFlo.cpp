#include <iostream>
# include<iomanip>

using namespace std;
int main(){
    float val1 = 1.1;
    cout << setprecision(10)<<val1<< endl;

    if (val1 == 1.1)
    {
        cout << " currect"<< endl;
    }
    else
    {
        cout << setprecision(10) << " wrong"<< endl;
    }
    cout << val1<< endl;
    return 0;

}