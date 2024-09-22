#include<iostream>
using namespace std;
void sum()
{
	int n1,n2;
	cout<<"first number"<<endl;
	cin>>n1;
	cout<<"second number"<<endl;
	cin>>n2;
	cout<<"sum"<<n1+n2<<endl;
}

void sub()
{
	int n1,n2;
	cout<<"first number"<<endl;
	cin>>n1;
	cout<<"second number"<<endl;
	cin>>n2;
	cout<<" sub ="<<n1-n2<<endl;
}

void mul()
{
	int n1,n2;
	cout<<"first number"<<endl;
	cin>>n1;
	cout<<"second number"<<endl;
	cin>>n2;
	cout<<"product ="<<n1*n2<<endl;
}
void div()
{
	int n1,n2;
	cout<<"first number"<<endl;
	cin>>n1;
	cout<<"second number"<<endl;
	cin>>n2;
	cout<<" div ="<<n1/n2<<endl;
}
 main()
 {
 	int n;
 cout<<"press 1 for add"<<endl;
 cout<<"press 2 for sub"<<endl;
 cout<<"press 3 for multiply"<<endl;
 cout<<"press 4 for division"<<endl;
 cin>>n;
 if(n==1)
 sum();
 else if(n==2)
 sub();
 else if(n==3)
 mul();
 else if(n==4)
 div();
 else
 cout<<"invalid number"<<endl;
 
 
}

 	
 	
 	
 	
 	
 	
 	
 
