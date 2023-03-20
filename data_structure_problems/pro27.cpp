#include<iostream>
using namespace std;

int main()
{
	int i,j;
	int num[] = {9,8,7,6,5,4,3};
	int n = 7;
	int temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(num[j]>num[j+1])
			{
				temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<num[i]<<" ";
	}
}
