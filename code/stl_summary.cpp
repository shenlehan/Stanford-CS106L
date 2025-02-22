#include <iostream>
#include <vector>
#include <list>
#include <forward_list>

std::vector<int> v;
std::forward_list<int> fl;

namespace my_name_space {
    int a;
}

template<typename t>
int calc(t a) {
    int res = 0;
    for (auto i : v) {
        if (a(i)) ++res;
    }
    return res;
}

int eq(int x, int y) {
    return x == y;
}

void init() {
    for (int i = 0; i < 10; ++i) v.push_back(i);
}

int main() {
    init();
    // std::cout << calc(eq) << std::endl; 
    // Error: too few argument

    int a = 1;
    auto f = [&a](int x, int y) {
        static int called = 0;
        ++called;
        a++;
        std::cout << "Called=" << called << std::endl;
    };
    
    auto g = [&a](int x, int y)->void {
        a++;
    };

    f(0, 0);
    std::cout << a << std::endl;
    
    f(0, 0);
    std::cout << a << std::endl;

    // g(0, 0);
    // std::cout << a << std::endl;
    return 0;
}