#include<iostream>
using namespace std;
class calculate
{
	private:
		float sub[5],t=200,sum=0,perc;
		public:
			void setdata(float subject[5],float percent)
			{
				sub[5]=subject[5];
				
				perc=percent;
			}
			void percentage()
			{
				cout<<"marks of subject"<<endl;
				for(int i=0;i<5;i++)
				{
					cin>>sub[i];
				}
				cout<<"total marks:"<<endl;
				for(int i=0;i<5;i++)
				{
					sum=sum+sub[i];
					
				}
				cout<<sum<<endl;
				cout<<"percentage is"<<endl;
				perc=sum/t+100;
				cout<<perc<<endl;
				}
			};
			main()
			{
			
			calculate obj1;
			obj1.setdata();
			obj1.percentage();
			
 } 
