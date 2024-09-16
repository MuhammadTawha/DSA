#include <iostream>
using namespace std;
int main() {
int size, value, index = -1;
cout <<"Enter size of the array: ";
cin >> size;
int* arr = new int[size];
cout << "Enter values of the array:\n";
for (int i = 0; i < size; ++i) {
cout << "Number "<< i + 1 << ": ";
cin >> arr[i];
}
cout <<"Enter the number to be searched: ";
cin >> value;
for (int i = 0; i < size; ++i) {
if (arr[i] == value) {
index = i;
break;
}
}
if (index != -1) {
cout << "Value found at index " << index << "(" << index + 1 << "place)." << endl;
} else {
cout << "Value not found in the array." <<
endl;
}
delete[] arr;
return 0;
}