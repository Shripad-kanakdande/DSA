#include<iostream>
using namespace std;
#define MAX 100000
//14.33

int main()
{
	int i,j,temp;
	int * num;
	num = new int[MAX];
	for(i=0;i<MAX;i++)
	{
		num[i] = MAX-i;
//		cout<<num[i]<<" ";
	}
	int n = MAX;
	for(i=0;i<n;i++)
	{
		temp = num[i];
		for(j=i-1;j>=0 && num[j]>temp;j--)
		{
			num[j+1] = num[j];
		}
		num[j+1] = temp;
	}
//	cout<<"\n\n\n";
//	for(i=0;i<n;i++)
//	{
//		cout<<num[i]<<" ";
//	}
}
