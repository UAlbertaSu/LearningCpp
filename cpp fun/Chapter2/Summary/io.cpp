#include <iostream>
#include "io.h"


int readNumber(){

    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    return x;

}

void writeAnser(int x){

    std::cout << "The sum is " << x << '\n';
}
