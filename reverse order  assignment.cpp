#include<iostream>
using namespace std;
int main()
{
	int arr[5] ;
	cout<<"enter array elements "<<endl;
	for(int i=0;i<5;i++)
	cin>>arr[i];
	cout<<"\n original array is :"<<endl;
	for(int i=0;i<5;i++)
	cout<<arr[i]<<" ";
	cout<<"\n reverse order of array is :"<<endl;
	for(int i=5-1;i>=0;i--)
	cout<<arr[i]<<" ";
    return 0;
}
