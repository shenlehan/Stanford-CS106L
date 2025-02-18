#include <iostream>
#include <stack>
#include <concepts>

template<typename T>
    // requires 
T comp(const T& a, const T& b) {
    if (a < b) return a;
    else return b;
}

class my_class {
    int val;
public:
    my_class(int a): val(a) {}
    my_class(double a): val(a) {}
private:
    bool operator < (const my_class &obj) const {
        return val < obj.val;
    }
};

int main() {
    int a = 10, b = 20;
    std::cout << comp(a, b) << std::endl;
    my_class aa(10), bb(0.6);
    std::stack<int> s;
    std::cout << s.size() << std::endl;
    return 0;
}