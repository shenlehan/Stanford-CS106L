#include <iostream>
#include <set>
#include <map>

std::set<int> s;

int main() {
    for (int i = 0; i < 10; ++i) {
        s.insert(rand());
    }
    for (std::set<int>::iterator it = s.begin(); it != s.end(); ++it) {
        std::cout << *it << std::endl;
    }
    std::cout << "**********" << std::endl;
    for (auto &it: s) {
        std::cout << it << std::endl;
        // it = 0;
    }
    std::cout << "**********" << std::endl;

    for (std::set<int>::iterator it = s.begin(); it != s.end(); ++it) {
        std::cout << *it << std::endl;
    }
    std::cout << "**********" << std::endl;

    std::map<int, int> mp;
    for (int i = 1; i <= 10; ++i) {
        mp[i] = rand();
    }
    for (auto &it: mp) {
        std::cout << it.first << ' ' << it.second << std::endl;
        it.second = 0;
    }
    for (auto &it: mp) {
        std::cout << it.first << ' ' << it.second << std::endl;
    }
    return 0;
}