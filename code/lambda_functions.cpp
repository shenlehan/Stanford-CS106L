#include <iostream>
#include <list>

int main() {
    int m = 1, n = 2, q = 3;

    int x = [=](int a)->int { return a + m + n + q; } (123);
    auto y = [=](int a)->int { return a + m + n + q; };
    std::cout << x << std::endl;
    std::cout << y(123) << std::endl;    

    return 0;
}