#include <iostream>
#include<conio.h>
using namespace std;

class Stack

{
   private:
    int top;
    int stk[5];
    
    public:
    Stack()
    {
    	top=-1;
    }
    void push(int);
    void pop(void);
    void display(void);
};
int main()
{
Stack s;
int n,opt, loop = 1;
while(loop)
{
	cout<<"1-Pushing stack"<<endl;
    cout<<"2-Poping stack"<<endl;
    cout<<"Display stack"<<endl;
    cout<<"Exit"<<endl;
    cout<<"Enter your option [1-4]?";
    cin>>opt;
    switch(opt)
    {
    	case 1: 
        		cout<<"Enter value to insert:";
                cin>>n;
                s.push(n);
                break;
        case 2:
        		s.pop();
                break;
                
        case 3:
        		cout<<"Values in stack\n";
                s.display();
                break;
        case 4:
        		loop=0;
                break;
         default:
         		  cout<<"Invalid option";
    }
}
}
void Stack::push(int x)
{
	if(top == 4)
    {
    	cout<<"stack overflow";
        getch();
        return ;
    }
    
    top =top+1;
    stk[top]=x;
}

void Stack::pop(void)
{
	int val;
    if(top == -1)
    { 
    	cout<<"Stack is empty";
        getch();
        return ;
    }
    val = stk[top];
    stk[top]= NULL;
    top = top-1;
    cout<<"Value"<<val<<"is removed"<<endl;
    getch();
}

void Stack::display(void)
{
	if(top == -1)
    {
    	cout<<"Stack is empty";
        getch();
        return ;
    }
    for(int x = top; x>=0; x--)
    cout<<stk[x]<<endl;
    getch();
}

