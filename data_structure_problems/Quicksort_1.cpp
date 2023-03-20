#include<iostream>
using namespace std;

int partition(int *num,int low,int up)
{
	int p,q,pivot;
	pivot = num[low];
	p = low+1;
	q = up;
	do
	{
		while(num[p]<=pivot && p<=up)
		{
			p++;
		}
		while(num[q]>pivot)
		{
			q--;
		}
		if(p<q)
		{
			int temp = num[q];
			num[q] = num[p];
			num[p] = temp;
		}
	}while(p<q);
	int temp = num[q];
	num[q] = num[low];
	num[low] = temp;
	
	return q;
}

Quicksort(int *num,int low,int up)
{
	if(low<up)
	{
		int k = partition(num,low,up);
		Quicksort(num,low,k-1);
		Quicksort(num,k+1,up);
	}
}

int main()
{
	int num[10] = {10,9,8,7,6,5,4,3,2,1};
	int i;
	cout<<"Unsorted array : "<<endl;
	for(i=0;i<10;i++)
	{
		cout<<num[i]<<" ";
	}
	
	Quicksort(num,0,9);
	
	cout<<"\nSorted array : "<<endl;
	for(i=0;i<10;i++)
	{
		cout<<num[i]<<" ";
	}
}
