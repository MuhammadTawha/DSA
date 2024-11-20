#include <iostream>
using namespace std;
int main() {
	int n =9,sort=0;
    int a[n];	
	cout<<"UnSorted Array:"<<endl;
	for(int k=0;k<n;k++){
	
	cin>>a[k];
	}
	for(int k=0;k<n;k++){
	
	cout<<a[k]<< " ";
	}
	cout<<" "<<endl;
	cout<<"Bubble Sort"<<endl;
	int temp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
			temp= a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			sort++;
			}
			
		}
	}
	if(sort==0){
		cout<<"You input a sorted array"<<endl;
	}
	else{
	
	cout<<"Sorted Array after Bubble Sort is :"<<endl;
	for(int k=0;k<n;k++)
	cout<<a[k]<< " ";
	cout<<" "<<endl;}
    return 0;
}