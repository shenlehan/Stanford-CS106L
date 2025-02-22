#include <iostream>
#include <vector>

void demo1() {
    int x = 1;
    std::cout << (x += 2) << std::endl; // return 3, '+=' is defined with reference
}

// overload operator += for vector<int>
std::vector<int>& operator += (std::vector<int>& v, int x) {
    v.push_back(x);
    return v;
}

void demo2() {
    std::vector<int> v(10);
    v += 1;
    v += 2;
    v += 3;
    for (auto i: v) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

// void demo3() {
//     std::vector<int>& std::vector<int>::operator += (int x) {
//         this->push_back(x);
//         return *this;
//     }
// }

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    demo1();
    demo2();

    return 0;
}