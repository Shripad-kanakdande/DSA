#include<iostream>
using namespace std;

class Node
{
	public:
	int data;
	Node * next;
	Node * prev;
	Node()
	{
		data = 0;
		next = NULL;
		prev = NULL;
	}
	Node(int x)
	{
		data = x;
		next = NULL;
		prev = NULL;
	}
};

class DLL
{
	Node * head;
	public:
		DLL()
		{
			head = NULL;
		}
		void addatend(int x);
		void show();
};

void DLL::addatend(int x)
{
	Node * p;
	p = head;
	if(head == NULL)
	{
		head = new Node(x);
		return;
	}
	while(p->next != NULL)
	{
		p = p->next;
	}
	Node *q;
	q = new Node(x);
	p->next = q;
	q->prev = p;
}

void DLL::show()
{
	Node *p;
	p = head;
	while(p != NULL)
	{
		cout<<p->data<<endl;
		p = p->next;
	}
}

void twoscomp(int * num,int x)
{
	int i;
	for(i=x;i<16;i++)
	{
		num[i] = ~num[i];
	}
}

void binary(int num[16])
{
	int i;
   int x;
   cin>>x;
   for(i=15;i>=0;i--)
   {
   		num[i] = x%2;
   		x = x/2;
   }
   for(i=0;i<16;i++)
   {
   		if(num[i] == 1)
   		{
   			twoscomp(num,i);
   			break;
		}
   }
   for(i=0;i<16;i++)
   {
   		cout<<num[i];
   }
}

int main()
{
	DLL D1;
	D1.addatend(10);
	D1.addatend(10);
	D1.show();
}
