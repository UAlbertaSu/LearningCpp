#include <iostream>
#include <string>

int main(){

    std::cout << "What is your name? ";
    std::string name{};
    std::getline(std::cin, name);

    std::cout << "Where are you from? ";
    std::string location{};
    std::getline(std::cin, location);
    
    std::cout << "Hello " << name << " of " << location <<"! \n";

    return 0;

}

