#include<iostream>
using namespace std;
  void calculate (int  ,int ,char  );
   int main()
  {
  	int num1,num2;
  	char ch;
  	cout<<"enter two numbers";
  	cin>>num1>>num2;
  	cout<<"\n before swap";
  	cout<<"num1="<< num1<<"num2="<< num2<<"\n\n";
  	swap(num1,num2);
  	return 0;
  }
  
  
  
{
  cout<<"\n";
  switch(c)
  {
  	case '+':
  	cout<<"sum of"<<a<<"and"<<b<<"is"<<a+b;
  	break;
  	case '-':
  	cout<<"sub of"<<a<<"and"<<b<<"is"<<a-b;
  	break;
  	case '*':
  	cout<<"product of"<<a<<"and"<<b<<"is"<<a*b;
  	break;
  	case'/':
  	if(a<b)
  	{
	  
  	cout<<"first number should be greater than second";
	  cout<<"press any key to exit";
	  
  }
    cout<<"quotient"<<a<<"/"<<b<<"is"<<a/b;
    break;
    case'%':
    cout<<"remainder"<<a<<"%"<<b<<"is"<<a%b;
    break;
    default:
    	cout<<"sorry.....!.....wrong operator...!\n";
    }
    
}
 
 
