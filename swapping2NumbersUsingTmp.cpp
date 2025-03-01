#include <iostream>
using namespace std;

int main() { 
int a = 10;
int b = 15;
int tmp;

cout << "before swapping numbers are :" << endl;
cout << "a = " <<a << endl;
cout << "b = " <<b << endl;

tmp = a;
a = b;
b = tmp;

cout << "after swapping numbers are :" << endl;
cout << "a = " <<b << endl;
cout << "b = " <<a << endl;

return 0;
}