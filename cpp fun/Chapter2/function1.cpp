#include <iostream>


int getValueFromUser(){

    int x{};
    std::cout << "Enter an integer: ";
    std::cin >>x;

    return x;
}
int main(){

    int num{getValueFromUser()};

    std::cout<< "Double that number is: "<< num * 2 << '\n';
    return 0;
}
