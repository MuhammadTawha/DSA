#include <iostream>
using namespace std;
int main() {
int size;
cout << "Enter the size of each array: ";
cin >> size;
int *arr1 = new int[size];
int *arr2 = new int[size];
int *arr3 = new int[size];
int *result = new int[size];
cout << "Enter values in first array:\n";
for (int i = 0; i < size; i++) {
cout << "Number " << i + 1 << ": ";
cin >> arr1[i];
}
cout << "Enter values in second array:\n";
for (int i = 0; i < size; i++) {
cout << "Number " << i + 1 << ": ";
cin >> arr2[i];
}
cout << "Enter values in third array:\n";
for (int i = 0; i < size; i++) {
cout << "Number " << i + 1 << ": ";
cin >> arr3[i];
}
for (int i = 0; i < size; i++) {
result[i] = arr1[i] + arr2[i] + arr3[i];
}
cout << "Result of adding three arrays:\n";
for (int i = 0; i < size; i++) {
cout << "Number " << i + 1 << ": " << result[i] << endl;
}
delete[] arr1;
delete[] arr2;
delete[] arr3;
delete[] result;
return 0;
}