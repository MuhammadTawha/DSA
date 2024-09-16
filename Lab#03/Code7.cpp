#include <iostream>
using namespace std;
int main() {
int num;
cout << "Please enter a number: ";
cin >> num;
int* ptr = &num;
cout << endl;
cout << "The value you entered: " << *ptr << endl;
cout << endl;
cout << "Address of the variable: " << ptr << endl;
cout << endl;
cout << "Address of the pointer: " << &ptr << endl;
return 0;
}
