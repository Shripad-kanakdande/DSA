#include<iostream>
using namespace std;

int main()
{
	int num[] = {9,8,7,6,5,4,3,2,1,0};
	int i,j,temp;
	for(i=0;i<10;i++)
	{
		temp = num[i];
		j = i-1;
		while(num[j]>temp && j>=0)
		{
			num[j+1] = num[j];
			j--;
		}
		num[j+1] = temp;
	}
	cout<<"Sorted array : ";
	for(i=0;i<10;i++)
	{
		cout<<num[i]<<" ";
	}
}
