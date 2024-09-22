#include<iostream>
using namespace std;
void checknumber(int n);
int main()
{
 int n;
 cout<<"\nenter a number";
 cin>>n;
 cout<<"\nnature of a number\n";
 checknumber(n);
 return 0;
}
void checknumber(int n)
{
	int c=0;
	for(int i=2;i<n;i++)
	{
		if(n%2==0)
		c=1;
	}
	if(n%2==0&&c==0)
	cout<<n<<"is a prime even number";
	else if(n%2!=0&&c==0)
		cout<<n<<"is a odd prime number";
		else if(n%2!=0&&c==0)
		cout<<n<<"is a only an even number not prime number";
		else if(n%2!=0 )
		cout<<n<<"is a only an odd number not prime number";
			else  
		cout<<n<< "is  not prime number";
		
		}	
	
 
 
