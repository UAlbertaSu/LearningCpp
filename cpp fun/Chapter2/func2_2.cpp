#include <iostream>

int doubleNumber(int x){

    return x *2;

}

int main(){

    int x{};
    std::cout << "Enter an integer: ";
    std::cin >>x;
    std::cout<< "Double that number is: "<< doubleNumber(x) << '\n';

    return 0;    
}
