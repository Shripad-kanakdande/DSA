#include<stdio.h>
#include<stdlib.h>
void search(int s,int e,int key,int * num);

int main()
{
	int num[5] = {1,2,3,4,5};
	int n = 5;
	int s,e,mid,key;
	printf("Enter key : \n");
	scanf("%d",&key);
	s = 0;
	e = n-1;
	search(s,e,key,num);
	
	return 0;
}

void search(int s,int e,int key,int * num)
{
	int mid;
	mid = (s+e)/2;
	if(s>e)
	{
		printf("Not found!");
		return;
	}
	if(num[mid] == key)
	{
		printf("found!!");
		return;
	}
	if(key < num[mid])
	{
		e = mid-1;
		search(s,e,key,num);
	}
	if(key > num[mid])
	{
		s = mid+1;
		search(s,e,key,num);
	}
	
}
