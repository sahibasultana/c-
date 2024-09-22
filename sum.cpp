#include<iostream>
using namespace std;
class   firstclass
{
	private :
		int data;
		public:
			firstclass(int d)
		 
			{
				 data=d;
			}
			void display()
			{

			cout<<"data :"<<data;
		}
		};
   int main()
   {
   	firstclass obj(10);
   	obj.display();
    
   	 
   	
   }
  	
 
  
