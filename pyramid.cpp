#include<iostream>
using namespace std;
class pyramid
{
	private:
		int r,sp,disp,n,no;
		public:
			show()
			{
				cout<<"enter a no";
				cin>>no;
				n=no;
			}
			void sol()
			{
				for(r=1;r<=no;r++)
				{
					for(sp=1;sp<=n;sp++)
					{
						cout<<" ";
					}
					n--;
					for(disp=1;disp<=r;disp++)
					{
						cout<<" "<<r;
					}
					cout<<endl;
				}
			}
	};
	int main()
	{
		pyramid obj;
		obj.show();
		obj.sol();
	}
			
 
