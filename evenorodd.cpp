#include<iostream>
using namespace std;
 void calculate(int,int,char);
int main()
{
	int  num1,num2;
	 char ch;
	cout<<"enter two integer::";
	cin>>num1>>num2;
	cout<<" enter arithmetic operator +,-,*,/,%:";
	  cin>>ch;
	  calculate(num1,num2,ch)
	  return 0;
}
void calculate (int a,int b,ch)
	 {
	 	 cout<<"\n";
	 	 switch (c)
	 	 {
	 	 	case'+':
	 	 		cout<<"sum of"<<a<<"and"<<b<<"is"<<a+b;
	 	 		break;
	 	 			case' -':
	 	 		cout<<" diff of"<<a<<"and"<<b<<"is"<<a-b;
	 	 		break;
	 	 			case' *':
	 	 		cout<<" product of"<<a<<"and"<<b<<"is"<<a+b;
	 	 		break;
	 	 			case'/':
	 	 		cout<<"diff of"<<a<<"and"<<b<<"is"<<a+b;
	 	 		break;
	 	 		
	 	 			case'+':
	 	 		cout<<"sum of"<<a<<"and"<<b<<"is"<<a+b;
	 	 		break;
	 	 		
	 	 		
	 	 		
		  }
		  
	 }
	 return 0;
}

	 int checkprimenumber(int n)
	 {
	 	bool flag=true;
	 	for(int j=2;j<=n/2;++j)
	 	
	 {
	 if(n%j==0)
	 {
	 	flag=false;
	 	break;
		  }	 
}

return flag;
}
