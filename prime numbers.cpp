#include<iostream>
using namespace std;
class checkprime
{
	private:
		int num;
		public:
			void setdata()
			{
				cout<<"enter a number:";
				cin>>num;
			}
			void prime()
			{
				if(num/2==1)
				cout<<"  prime number";
				else
				cout<<"  not prime number";
			}
			
};
main()
{
	checkprime n1;
	n1.setdata();
	n1.prime();
}

