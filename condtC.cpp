# include <iostream>
using namespace std;
/*
== equals to
!= not eaquals
< less then
> more than
<= less than or equals
>= greater than or equals
&& and
|| or
*/
int main(){

    int value1 = 7;
    int value2 = 4;

    if (value1 >= 5) {
        cout<< "\n condition 1: true \n";
    } else {
        cout<< " condition 1: false \n";
    }

    if (value1 == 7 && value2 <3)
    {
        cout<< " condition 2: true \n";
    }else {
        cout<< " condition 2: false \n";
    }

    if (value1 == 7 || value2 <3)
    {
        cout<< " condition 3: true \n";
    }else {
        cout<< " condition 3: false \n";
    }
    return 0;
}