#include<iostream>
using namespace std;
int main()
{
	int c,num,p=1;
	cout<<"enter an integer";
	cin>>num;
	for(c=2;c<=num/2;c++)
	if(num%c==0)
	{
		p=0;
		break;
	}
	if(p==1)
	cout<<num<<"is a prime number";
	else
	cout<<num<<"is a composite number";
	return 0;
}
