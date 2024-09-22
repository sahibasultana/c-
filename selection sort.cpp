#include<iostream>  
using namespace std;  
class selection
{
      private:
              int abc[5];
      public:
               void input();
               void sort();
               void print();
};
int main()  
{    
    selection obj;
    obj.input();
    obj.sort();
    obj.print();
    
}
void selection::input()
{
	cout<<"enter 5 values"<<endl;
	for(int i=0; i<=4; i++)
	cin>>abc[i];
}
 void selection::sort(void)
 {
      int min,temp,loc;
      for(int u=0; u<=4; u++)
      {
              min=abc[u];
              loc=u;
              for(int i=u; i<=4; i++)
                if(min>abc[i])
                {
                	min = abc[i];
                	loc = i;
				}
				temp=abc[loc];
				abc[loc]=abc[u];
				abc[u]=temp;
			}
}
void selection::print(void)
{
	cout<<"Sorted array"<<endl;
	for(int i=0; i<=4; i++)
	{
		cout<<abc[i]<< "\t";
		cout<<endl;
	}
}
