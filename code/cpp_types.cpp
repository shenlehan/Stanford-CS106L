#include <iostream>
#include <string>
#include <tuple>
#include <utility>

int main() {
    auto name1 = "qwq";
    auto name2 = std::string{"qwq"};
    const auto &better_name = std::string{"qwq"};
    
    std::pair<int, int> p;
    auto pairs = std::make_pair(123, "456");
    auto tuple = std::make_tuple("Hello", 111, 0.9, 12313, "qwwq", "233", pairs); 

    auto i = std::get<0>(pairs);
    auto j = pairs.second;

    auto [a, b] = pairs;
    auto& [x1, x2, x3, x4, x5, x6, x7] = tuple;
    return 0;
}