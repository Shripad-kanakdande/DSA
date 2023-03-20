#include<iostream>
using namespace std;

void merge(int *num,int low,int mid,int up)
{
	int k = 0;
	int i=low;
	int j = mid+1;
	int *res;
	res = new int[up-low+1];
	while(i<=mid && j<=up)
	{
		if(num[i]<num[j])
		{
			res[k] = num[i];
			i++;k++;
		}
		else
		{
			res[k] = num[j];
			j++;k++; 
		}
	}
	while(i<=mid)
	{
		res[k] = num[i];
		i++;k++;
	}
	while(j<=up)
	{
		res[k] = num[j];
		j++;k++;
	}
	k=0;
	for(i=low;i<=up;i++)
	{
		num[i] = res[k];
		k++;
	}
}

void Mergseort(int *num,int low,int up)
{
	int mid;
	if(low<up)
	{
		mid = (low+up)/2;
		Mergseort(num,low,mid);
		Mergseort(num,mid+1,up);
		merge(num,low,mid,up);
	}
}

int main()
{
	int n;
	cout<<"Enter n : ";
	cin>>n;
	int *num;
	num = new int[n];
	int i;
	cout<<"Unsorted array = ";
	for(i=0;i<n;i++)
	{
		num[i] = n-i;
		cout<<num[i]<<" ";
	}
	
	Mergseort(num,0,n-1);
	
	cout<<"\nSorted array = ";
	for(i=0;i<n;i++)
	{
		cout<<num[i]<<" ";
	}
}
