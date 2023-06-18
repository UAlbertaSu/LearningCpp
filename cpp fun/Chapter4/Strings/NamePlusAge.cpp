#include <iostream>
#include <string>

int main(){

    std::cout << "What is your name? ";
    std::string name{};
    std::getline(std::cin, name);

    std::cout << "How old are you? ";
    int age{};
    std::cin >> age;

    std::cout << "Your age + length of name is: " << static_cast<int>(name.length()) + age << '\n';

    return 0; 
}
