#include <iostream>
using namespace std;
int main() {
int count;
cout << "How many numbers will you enter? ";
cin >> count;
int* numbers =
new int[count];
cout << "Please input " << count << "numbers:" << endl;
for (int i = 0; i <
count; ++i) {
cin >>
numbers[i];
}
int oddSum = 0;
for (int i = 0; i <
count; ++i) {
if (numbers[i] %
2 != 0) {
oddSum +=
numbers[i];
}
}
cout << "Total sum of odd numbers: " <<
oddSum << endl;
delete[] numbers;
return 0;
}