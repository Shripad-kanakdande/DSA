#include<iostream>
using namespace std;
#define MAX 100000
//34.05
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
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(num[i]<num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
//	cout<<"\n\nAfter";
//	for(i=0;i<n;i++)
//	{
//		cout<<num[i]<<" ";
//	}
}
