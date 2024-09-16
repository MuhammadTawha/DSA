#include <iostream>
using namespace std;
int main() {
int num1, num2;
int* pNum1 = &num1;
int* pNum2 = &num2;
cout << "Enter a value for the first number (num1): ";
cin >> num1;
cout << "Enter a value for the second number (num2): ";
cin >> num2;
cout << "\nValue of num1 (via pointer): " << *pNum1 << endl;
cout << "Value of num2 (via pointer): " << *pNum2 << endl;
cout << "\nMemory address of num1: " << pNum1 << endl;
cout << "Memory address of num2: " << pNum2 << endl;
return 0;
}