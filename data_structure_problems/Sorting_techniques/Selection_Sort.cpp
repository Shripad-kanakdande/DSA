#include <iostream>
using namespace std;
//Selection Sort

void Selection_Sort(int *num,int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(num[i]>num[j])
			{
				int temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
}

int main()
{
	int n,i;
	cout<<"Enter no. of elements you want to sort : "<<endl;
	cin>>n;
	
	int *num;
	num = new int [n];
	
	cout<<"Enter "<<n<<" integers : "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>num[i];
	}
	
	cout<<"\nUnsorted array : "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<num[i]<<" ";
	}
	
	Selection_Sort(num,n);
	
	cout<<"\nSorted array : "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<num[i]<<" ";
	}
	return 0;
}

