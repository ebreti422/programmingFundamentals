#include <iostream>
using namespace std;

int main() {
    int a, b, sum;
    std::cout << "enter first number: ";
    std::cin >> a;

    std::cout << "enter second number: ";
    std::cin >> b;

    sum = a + b;

    std::cout << "the sum is: " << sum << std::endl;

    return 0;
}