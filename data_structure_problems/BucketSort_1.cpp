#include<iostream>
using namespace std;

int main()
{
	int n;
	int *num;
	cout<<"Enter n :";
	cin>>n;
	num = new int[n];
	cout<<"Unsorted array : "<<endl;
	for(int i=0;i<n;i++)
	{
		num[i] = n-i;
		cout<<num[i]<<" ";
	}
	int max;
	max = num[0];
	int i;
	for(i=0;i<n;i++)
	{
		if(num[i]>max)
		{
			max = num[i];
		}
	}
	int *freq;
	freq = new int [max+1];
	for(i=0;i<=max;i++)
	{
		freq[i] = 0;
	}
	for(i=0;i<n;i++)
	{
		freq[num[i]]++;
	}
	cout<<"\nSorted arra = "<<endl;
	for(i=0;i<=max;i++)
	{
		if(freq[i] == 1)
		{
			cout<<i<<" ";
		}
	}
}
