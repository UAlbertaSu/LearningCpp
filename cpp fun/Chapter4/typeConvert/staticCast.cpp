#include <iostream>


int main(){

    std::cout << "Enter a single Charater: ";
    char x{};

    std::cin >> x;

    std::cout<< "You enetered: " << x << " which has ASCII code " << static_cast<int>(x) << '\n';

    return 0;
}
