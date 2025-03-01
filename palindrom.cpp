#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;

    while (num<0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;

    }

    return originalNum == reversedNum;
}

int main() {
    int number;
    cout << "Enter a numbner: ";
    cin >> number;

    if (isPalindrome(number)) {
        cout << number << "Is a palindrome." << endl;
    } else {
        cout << number << " Is not a palindrome." << endl;

    }

    return 0;
}