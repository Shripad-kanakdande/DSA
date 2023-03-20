#include<iostream>
using namespace std;
#define MAX 5

class Stack
{
	int data[MAX];
	int top;
	public:
		Stack()
		{
			top = -1;
		}
		int empty()
		{
			if(top == -1)
			{
				return 1;
			}
			return 0;
		}
		int full()
		{
			if(top == MAX-1)
			{
				return 1;
			}
			return 0;
		}
		void push(int x)
		{
			if(full())
			{
				cout<<"Stack full!"<<endl;
				return;
			}
			top++;
			data[top] = x;
		}
		int pop()
		{
			if(empty())
			{
				cout<<"Empty Stack!!"<<endl;
			}
			else
			{
				int x = data[top];
				top--;
				return x;
			}
		}
		void show()
		{
			int i;
			for(i=0;i<=top;i++)
			{
				cout<<data[i]<<endl;
			}
		}
};

int main()
{
	Stack S;
//	cout<<S.empty()<<" "<<S.full();
	S.push(10);
	S.push(10);
	S.push(10);
	S.push(10);
	S.push(10);
	S.push(10);
	S.show();
	S.pop();
	S.pop();
	S.pop();
	S.pop();
	S.pop();
	S.pop();
	cout<<"After popping : "<<endl;
	S.show();
}





