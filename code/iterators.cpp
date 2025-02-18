#include <iostream>
#include <set>
#include <map>
#include <utility>


int main() {
    std::set<int> s;
    for (int i = 0; i < 10; ++i) {
        s.insert(rand());
    }
    for (std::set<int>::iterator it = s.begin(); it != s.end(); ++it) {
        std::cout << *it << std::endl;
    }
    std::cout << "**********" << std::endl;
    for (auto &it: s) {
        std::cout << it << std::endl;
        // The elements in a std::set can't be modified
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
    for (auto [key, value] : mp) {
        std::cout << key << ' ' << value << std::endl;
    }
    
    std::multimap<int, int> mmp;
    mmp.insert(std::make_pair(3, 4));
    mmp.insert({3, 5});
    std::cout << mmp.count(3) << std::endl;

    return 0;
}