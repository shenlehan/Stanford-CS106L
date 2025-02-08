#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string s;
    char str[100];

    std::cin.getline(str, 1024);
    std::cout << str << std::endl;

    getline(std::cin, s);
    std::cout << s << std::endl;

    std::stringstream ss("16.9\n 24");


    return 0;
}