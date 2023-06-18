#include <iostream>

bool isPrime(int x){

    if ((x == 2) || (x == 3) || (x == 5) || (x == 7)){
        return true;
    }
   return false;
}

int main(){

    std::cout << "Enter a number between 0 and 9: ";
    int x;
    std::cin >> x;

    if (x < 0 || x > 9){
        std::cout << "Invalid input. Please enter a number between 0 and 9: ";
        return 1;
    }
    else{
        if (isPrime(x)){
            std::cout << "The number " << x << " is prime.\n" ;
        }
        else{
            std::cout << "The number " << x << " is not prime.\n";
        }
        return 0;
    }
}
