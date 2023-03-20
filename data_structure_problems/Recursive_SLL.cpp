#include<iostream>
using namespace std;

class Node
{
	public:
	int data;
	Node * next;
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
	Node* head;
	public:
		SLL()
		{
			head = NULL;
		}
		void call()
		{
			head = createrec();
			searchrec(2,head);
		}
		Node * createrec()
		{
			int x;
			cout<<"Enter data : ";
			cin>>x;
			if(x == -1)
			{
				return NULL;
			}
			Node*p;
			p = new Node(x);
			p->next = createrec();
			return p;
		}
		void show()
		{
			Node *p;
			p = head;
			while(p!=NULL)
			{
				cout<<p->data<<endl;
				p = p->next;
			}
		}
		void searchrec(int x,Node* p)
		{
			if(p==NULL)
			{
				return;
			}
			if(p->data == x)
			{
				cout<<"Found";
				return;
			}
			searchrec(x,p->next);
		}
};

int main()
{
	SLL S1;
	S1.call();
//	S1.show();
}
