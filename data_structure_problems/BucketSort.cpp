#include<iostream>
using namespace std;

int main()
{
	
	int n,i;
	cin>>n;
	int *arr=new int [n];
	for( i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int max=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	int *freq=new int[max+1];
	for( i=0;i<=max;i++)
	{
		freq[i]=0;
	}
	i=0;
	while(i<n)
	{
		int ind=arr[i];
		freq[ind]++;
		i++;
	}
	int k=0;
	for(i=0;i<=max;i++)
	{
		while(freq[i]--)
		{
			arr[k]=i;
			k++;
		}
	}
	cout<<"SORTED ARRAY  = ";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}
