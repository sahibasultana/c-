#include<iostream>
using namespace std;
class difference
{
	private:
		int a,b,c;
		public:
			void getdata()
			{
			cout<<"enter any two numbers:";
			cin>>a>>b;
		}
			void sub()
			{
				c=a-b;
		     cout<<"subtraction of two numbers:"<<c;
			}
		};
		main()
		{
			difference x1;
			x1.getdata();
			x1.sub();
		}
		
		
	
