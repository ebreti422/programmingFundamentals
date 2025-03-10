#include <iostream>
using namespace std;

int main() {
    int n1 = 0, n2 = 1, nth;

    cout << n1 << ", " << n2;

    for (int i = 3; i <= 10; i++) { 
        nth = n1 + n2;
        cout << ", " << nth;
        n1 = n2; 
        n2 = nth; 
    }

    cout << endl;
    return 0;
}

