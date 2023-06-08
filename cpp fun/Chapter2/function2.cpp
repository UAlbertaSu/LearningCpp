#include <iostream>


int getValueFromUser(){

    int x{};
    std::cout << "Enter an integer: ";
    std::cin >>x;

    return x;
}

void print(int num){

    std::cout<< "Double that number is: "<< num * 2 << '\n';

}

int main(){

    // int num{getValueFromUser()};

    // print(num);

    // can do this instead

    print(getValueFromUser());
    
    return 0;
}
