#include <iostream>

int main()
{

    // int x{};
    // int y{};

    [[maybe_unused]] int ans{};
    // using 2 std::cin to save 2 numbers
    // std::cout << "Enter a number: ";
    // std::cin >> x;

    // std::cout << "Enter another number: ";
    // std::cin >> y;

    // std::cout << "The sum of " << x << " and " << y << " is " << x + y << '\n';

    // can also use single std::cin statement
    // std::cout << "Enter 2 numbers separated by a space: ";
    // std::cin >> x >> y;
    // std::cout << "You entered " << x << " and " << y << '\n';

    std::cout << "Enter a number: "; // ask user for a number
    int x{}; // define variable x to hold user input
    std::cin >> x; // get number from keyboard and store it in variable x
    std::cout << "You entered " << x << '\n';

    return 0;
}
