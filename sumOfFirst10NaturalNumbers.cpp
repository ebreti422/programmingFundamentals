#include <iostream>

int main() {
    int sum = 0;

    for (int i = 1; i <= 10; ++i) {
        sum += i;
    }
    std::cout << "the sum of the first 10 natural numbers is: " << sum <<
    std::endl;

    return 0;
}