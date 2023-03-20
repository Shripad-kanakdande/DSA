#include<iostream>
using namespace std;

void downadjust(int *heap,int i)
{
	int n;
	n = heap[0];
	while(2*i<=heap[0])
	{
		int j = 2*i;
		if(j+1<=heap[0])
		{
			if(heap[j]<heap[j+1])
			{
				j = j+1;
			}
		}
		if(heap[i]<heap[j])
		{
			int temp = heap[i];
			heap[i] = heap[j];
			heap[j] = temp;
			
			i=j;
		}
		else
		{
			break;
		}
	}
}

int main()
{
	int n;
	cout<<"Enter no. of elements : ";
	cin>>n;
	int * heap;
	heap = new int [n+1];
	heap[0] = n;
	int i;
	for(i=1;i<=n;i++)
	{
		cin>>heap[i];
	}
	cout<<"\n\nUnsorted array = "<<endl;
	for(i=0;i<=n;i++)
	{
		cout<<heap[i]<<" ";
	}

	for(i=1;i<=n;i++)
	{
		downadjust(heap,i);
	}
	while(heap[0]>0)
	{
		int temp = heap[1];
		heap[1] = heap[heap[0]];
		heap[heap[0]] = temp;
		heap[0]--;
		downadjust(heap,1);
	}
	heap[0] = n;
	
	cout<<"\n\nSorted array = "<<endl;
	for(i=0;i<=n;i++)
	{
		cout<<heap[i]<<" ";
	}
}
