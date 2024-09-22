#include<iostream>
using namespace std;
int main()
{
	 int firstnumber,secondnumber;
	 int *firstp,*secondp;
	 int sum;
	 cout<<"\nfirst number\n";
	 cin>>firstnumber;
	 cout<<"\nsecond number\n";
	 cin>>secondnumber;
	 firstp=&firstnumber;
	 secondp=&secondnumber;
	 sum=*firstp+*secondp;
	 cout<<"\n sum is :"<<sum;
	 
	 
	 
    return 0; 
}
