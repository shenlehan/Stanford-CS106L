#include <iostream>
#include <string>
#include <tuple>
#include <utility>
#include <algorithm>
#include <vector>
#include <iterator>
#include <deque>

void vec_demo() {
    std::vector<int> v1(10);
    std::generate(v1.begin(), v1.end(), rand);
    std::copy(v1.begin(), v1.end(), std::ostream_iterator<int>(std::cout, "\n"));
    std::sort(v1.begin(), v1.end());
    std::copy(v1.begin(), v1.end(), std::ostream_iterator<int>(std::cout, "\n"));
    // get a warning
    std::cout << v1[11] << std::endl;
}

void deque_demo() {
    std::deque<int> deq;
    deq[0] = 1; // [] is available
    
}

int main() {
    vec_demo();
    return 0;
}