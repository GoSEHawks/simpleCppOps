#include<iostream>
#include<string>
void replaceFirst(
    std::string &s,
    std::string const & toReplace,
    std::string const & replaceWith
    ){

    std::size_t pos = s.find(toReplace);

    if (pos == std::string::npos) return;
    s.replace(pos, toReplace.length(), replaceWith);
}
int main(){
    std::string a;
    std::getline(std::cin,a);
    replaceFirst(a,"hell","****"); 
    std::cout<<a;

return 0;
}