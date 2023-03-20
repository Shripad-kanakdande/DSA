#include<iostream>
using namespace std;
#define MAX 100000
//23.97

int main()
{
	int i,j,temp;
	int * num;
	num = new int [MAX];
	for(i=0;i<MAX;i++)
	{
		num[i] = MAX-i;
//		cout<<num[i]<<" ";
	}
	int n = MAX;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(num[j]>num[j+1])
			{
				temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
		}
	}
//	cout<<"\n\n\n";
//	for(i=0;i<n;i++)
//	{
//		cout<<num[i]<<" ";
//	}
}
