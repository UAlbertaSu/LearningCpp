#include <iostream>

int main() {

    int x{};
    int y{};

    std::cout << "Enter an Integer: ";
    std:: cin >> x;

    std::cout <<"Enter another integer: ";
    std::cin >> y;

    std::cout << x << " + " << y << " is "<< x+y << '\n';
    std::cout << x << " - " << y << " is "<< x-y << '\n';

    
    return 0;
}
