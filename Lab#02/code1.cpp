#include <iostream>
using namespace std;
int main() {
int age[10];
int largestAge = 0;
for (int i = 0; i < 10; i++) {
cout << "Enter the age of student " << i + 1 << ": ";
cin >> age[i];
}
for (int i = 0; i < 10; i++) {
if (age[i] > largestAge) {
largestAge = age[i];
}
}
cout<<endl;
cout << "The largest age of student is: " << largestAge << endl;
return 0;
}