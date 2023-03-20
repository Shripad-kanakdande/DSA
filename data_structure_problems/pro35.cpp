#include<iostream>
using namespace std;

/*Q3.
Second year Computer Engineering class, set A of students like Vanilla Ice-cream and set
B of students like butterscotch ice-cream. Write C++ program to store two sets using
linked list. compute and display
a) Set of students who like both vanilla and butterscotch.
b) Set of students who like either vanilla or butterscotch.
c) Set of students who like only one of vanilla and butterscotch.
D) Number of students who like neither vanilla nor butterscotch.*/

class Node
{
	public:
	int data;
	Node *next;
	Node()
	{
		data = 0;
		next = NULL;
	}
	Node(int x)
	{
		data = x;
		next = NULL;
	}
};

class SLL
{
	Node *head;
	public:
		SLL()
		{
			head = NULL;
		}
		void create();
		void addatend(int x);
		void show();
};

void SLL::create()
{
	Node *p;
	int x;
	cout<<"Enter data : ";
	cin>>x;
	head = new Node(x);
	p = head;
	while(1)
	{
		cin>>x;
		if(x == -1)
		{
			return;
		}
		p->next = new Node(x);
		p = p->next;
	}
}

void SLL::show()
{
	Node *p;
	p = head;
	while(p!=NULL)
	{
		cout<<p->data<<endl;
		p = p->next;
	}
}

int main()
{
	SLL S1;
	S1.create();
//	S1.addatend(10)
	S1.show();
}













