#include<iostream>
using namespace std;
class student
{
private:
	int id,age;
	public:
		void studentdata(int a,int b)
	 {
	 	id=a;
	 	age=b;
	 }
	 void display()
	 {
	 	cout<<"student data is"<<id<<age;
	 	
	 }
	 };
 	main()
		{
			  student obj;
			  obj.studentdata(18,20);
			  obj.display();
		}
