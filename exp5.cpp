#include<iostream>
using namespace std;
class stack
{   
	static int size;
	private:
		int top;
		int arr[20];
	public:
		stack()
		{top=-1;
		}
		void push(int x)
		{
			if(top== (size-1) )
			{
			cout<<"Stack full!!"<<endl;
			return;}
			else
			{
				arr[++top]=x;
			}
		}
		
		void pop()
		{
			--top;
		}
		
		void Top()
		{    
		if(top==-1)
		{cout<<"Stack is empty nothing to show!!"<<endl;
		return;
		}
		cout<<"elements in stack rn are: "<<endl;
			for(int i=0; i<=top; i++)
			{
			cout<<arr[i]<<endl;
			}
		}
		
		int isEmpty()
		{
			if(top==-1)
			
				return 1;
			
			else
			return 0;
		}
		
		int isFull()
		{
			if(top==(size-1))
			return 1;
			else
			return 0;
		}
};

int stack::size = 10;

int main()
{
	stack obj;
	cout<<"Lets check whether our stack is empty or not!"<<endl;
	int ans = obj.isEmpty();
	if (ans==1)
	cout<<"It is empty"<<endl;
	else
	cout<<"Oops its full"<<endl;
	
	obj.push(1);
	obj.push(2);
	obj.push(3);
	obj.push(4);
	obj.push(5);
	obj.Top();
	cout<<endl;
	
	obj.pop();
	obj.pop();
	obj.push(6);
	obj.push(7);
	obj.push(8);
	obj.push(9);
	obj.push(10);
	obj.push(11);
	obj.push(12);
	obj.push(13);
	obj.push(14);
	obj.Top();
	
	return 0;
}
