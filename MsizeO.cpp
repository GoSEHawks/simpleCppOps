# include<iostream>
using namespace std;

int main(){
    
    string friends [] [4] = {{"this", "that", "who","were"},{"alex","bane","joker", "mane"}};

    for (int i = 0; i < sizeof(friends)/sizeof(friends[0]); i++){
        for (int j = 0; j < sizeof(friends[0])/sizeof(string); j++){

            cout << friends[i][j] << " " << flush;
        }
      cout << endl;
    }
    
    
    return 0;
}
