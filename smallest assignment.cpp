#include<iostream>
using namespace std;
int main()
{
	int arr[10],i,n,max,min;
	cout<<"enter size of an array: ";
	cin>>n;
	cout<<"enter the elements of the array:";
	for(int i=0;i<n;i++)
	cin>>arr[i];
	max=arr[0];
	for(i=0;i<n;i++)
	{
		if(max<arr[i])
	       max=arr[i];
	}
	min=arr[0];
	for(i=0;i<n;i++)
	{
		if(min>arr[i])
		min=arr[i];
	}
	cout<<"largest element:"<<max;
	cout<<"smallest element:"<<min;
	return 0;
}
