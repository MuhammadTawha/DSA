#include<iostream>
using namespace std;
int main()
{
int size=10;
int Max=0;
int arr[size];
cout<<"Enter values in array: "<<endl;
for(int i=0; i<size; i++)
{
cout<<i+1<<".\t";
cin>>arr[i];
}
for(int i=0; i<size; i++)
{
if(Max<arr[i])
{
Max=arr[i];
}
}
int Min=Max;
for(int i=0; i<size; i++)
{
if(Min>arr[i])
{
Min=arr[i];
}
}
cout<<"\n";
cout<<"Largest value in the array is:\t"<<Max<<endl;
cout<<"\n";
cout<<"Smallest value in the array is:\t"<<Min;
cout<<"\n";
return 0;
}