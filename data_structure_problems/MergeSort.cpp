#include<iostream>
using namespace std;

int main()
{
	int arr1[] = {4,6,7,9};
	int arr2[] = {1,3,8};
	int res[7];
	
	int k = 0;
	int i=0,j=0;
	int up = 7;
	while(i<=3 && j<=up)
	{
		if(arr1[i]<arr2[j])
		{
			res[i] = arr1[i];
			k++;
			i++;
		}
		else
		{
			res[i] = arr2[j];
			j++;
		}
	}
	while(i<=k)
	{
		res[i] = arr1[i];
		i++;
	}
	while(j<=up)
	{
		res[j] = arr2[j];
		j++;
	}
	for(i=0;i<up;i++)
	{
		cout<<res[i]<<" ";
	}
}
