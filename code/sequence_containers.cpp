#include <iostream>
#include <string>
#include <tuple>
#include <utility>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> v1 = {1, 2, 3};
    std::vector<int> v2{3};
    std::vector<int> v3(3);

    for (auto &i: v1) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    for (auto &i: v2) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    for (auto &i: v3) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}