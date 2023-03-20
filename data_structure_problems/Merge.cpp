#include<iostream>
using namespace std;

void merge(int* num,int low,int mid,int up)
{
	int i=low;
	int j = mid+1;
	int k = 0;
	int res[100];
	while(i<=mid && j<=up)
	{
		if(num[i]<num[j])
		{
			res[k] = num[i];
			k++;i++;
		}
		else
		{
			res[k] = num[j];
			k++;j++;
		}
	}
	while(i<mid)
	{
		res[k] = num[i];
		i++;k++;
	}
	while(j<up)
	{
		res[k] = num[j];
		k++;j++;
	}
	for(i=low;i<=up;i++)
	{
		num[i] = res[k];
		k++;
	}
}

void mergesort(int *num,int low,int up)
{
	int mid;
	while(low<up)
	{
		mid = (low+up)/2;
		mergesort(num,low,mid);
		mergesort(num,mid+1,up);
		merge(num,low,mid,up);
	}
}

int main()
{
	int num[10] = {1,4,5,6,3,8,9,7,2,0};
	cout<<"Unsorted array : "<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<num[i]<<" ";
	}
	
	mergesort(num,0,9);
	
	cout<<"Sorted qarray : "<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<num[i]<<" ";
	}
}
