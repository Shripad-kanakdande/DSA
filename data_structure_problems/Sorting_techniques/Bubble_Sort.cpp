#include <iostream>
using namespace std;
//Bubble sort

void Bubble_Sort(int *num,int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(num[j]>num[j+1])
			{
				int temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
		}
	}
}

int main()
{
	int i,n;
	cout<<"Enter no. of elements you want to sort : ";
	cin>>n;
	int * num;
	num = new int [n];
	
	cout<<"Enter "<<n<<" elements : "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>num[i];
	}
	
	cout<<"\nUnsorted array : "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<num[i]<<" ";
	}
	
	Bubble_Sort(num,n);
	
	cout<<"\nSorted array : "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<num[i]<<" ";
	}
	return 0;
}

