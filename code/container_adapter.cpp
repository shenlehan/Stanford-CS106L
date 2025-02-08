#include <iostream>
#include <stack>
#include <list>
#include <map>
#include <string>
/**
 * template<class T, class Container>
 * This means you are allowed to use a structure different from the C++ standard implementation
 */
std::stack<int, std::list<int> > s;

std::map<std::string, int> mp;
    
int main() {
    int a = mp["hello"];
    std::cout << a << std::endl; // will automatically initialize the key-value pair
    int b = mp.at("qwq");
    std::cout << b << std::endl; // will throw an error
    return 0;
}