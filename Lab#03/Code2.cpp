#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"Enter value of variable A: "<<endl;
cin>>a;
cout<<"Enter value of variable B: "<<endl;
cin>>b;
cout<<"\n";
cout<<"Before Swap"<<endl;
cout<<"A: "<<a<<"\t B: "<<b<<endl;
int *PTR1=&a;
int *PTR2=&b;
int temporary=*PTR1;
*PTR1=*PTR2;
*PTR2=temporary;
cout<<"After Swap"<<endl;
cout<<"A: "<<a<<"\t B: "<<b;
return 0;
}