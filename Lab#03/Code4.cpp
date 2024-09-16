#include<iostream>
using namespace std;
int main()
{
const int Month=12;
double arr[Month], TotalRain=0, AvgRain, MaxRain, MinRain;
int MaxMonth=1, MinMonth=1;
cout<<"Total rainfall for each month";
for(int i=0; i<Month; i++)
{
cout<<"Enter total rainfall for month "<<i+1<<": ";
cin>>arr[i];
}
MaxRain=MinRain=arr[0];
for(int i=0; i<Month; i++)
{
TotalRain=TotalRain+arr[i];
if(MaxRain<arr[i])
{
MaxRain=arr[i];
MaxMonth=i+1;
}
if(MinRain>arr[i])
{
MinRain=arr[i];
MinMonth=i+1;
}
}
AvgRain=TotalRain/Month;
cout<<endl;
cout<<"Total RainFall Over A Year: "<<TotalRain<<endl;
cout<<"Average Monthly RainFall: "<<AvgRain<<endl;
cout<<endl;
cout<<"Month With The Highest RainFall: "<<MaxMonth<<endl;
cout<<"Month With The Lowest RainFall: "<<MinMonth<<endl;
return 0;
}