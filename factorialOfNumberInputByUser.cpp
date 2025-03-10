#include <iostream>
using namespace std;

int main() {
    int number;
    long long factorial = 1;

    cout << "Number to find the factorial: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial of a negative number is undefined!" << endl;
    } else {
        for (int i = 1; i <= number; i++) {
            factorial *= i;
        }
        
        cout << "Factorial of " << number << " is : " << factorial << endl;
    }

    return 0;
}
