 #include <iostream>
 #include <string>
 #include <sstream>

 int main ()
 {
    using namespace std;

   std::string stringLength;
   float length = 0;
   float width = 0;

   cout << "Enter length: ";
   getline (std::cin,stringLength);
   stringstream(stringLength) >> length;
   cout << "Enter width: ";
   getline (std::cin,stringLength);
   stringstream(stringLength) >> width;


    float area = length*width;
   cout << "area is " << area;
   return 0;
 }