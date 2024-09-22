#include<iostream>
using namespace std;

class seq_search
{
	private:
	 int xyz[8];
	public:
		void input(void);
		void search(int);
		
};

int main()
{
	seq_search obj;
	int val;
	obj.input();
	cout<<"Enter value to search"<<endl;
	cin>>val;
	obj.search(val);
}

void seq_search::input(void)
{
	cout<<"Enter 8 values in array"<<endl;
	for(int i=0; i<=7;i++)
	cin>>xyz[i];
}
void seq_search::search(int n)
{
	int i, loc=-1;
	i=0;
	while(i<=7)
	{
		if(n==xyz[i])
		{
			loc= i + 1;
			cout<<"value found at location ="<<loc<<endl;
		}
		
		i++;
	}
	if(loc==-1)
	{
		cout<<"Value not found:";
	}
}