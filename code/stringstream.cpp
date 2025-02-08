#include <iostream>
#include <sstream>
#include <string>
#include <ostream>

void mindlessWork() {
    std::cout << "*******";
}

void bufferedTest(std::ostream &oss) {
    oss << "Hello";
    mindlessWork();
    oss << std::flush;
    oss << "World";
    mindlessWork();
    oss << std::flush;
    oss << "!";
    mindlessWork();
    oss << std::flush;
}

int main() {
    std::istringstream iss("Hello 123");
    int a;
    std::string b;
    iss >> b >> a;
    std::cout << a << " " << b << std::endl;

    std::stringstream new_iss;
    new_iss << "123.9";
    int c;
    std::string d;
    new_iss >> c >> d;
    std::cout << c << " " << d << std::endl;
    
    bufferedTest(std::cout); 
    return 0;
}