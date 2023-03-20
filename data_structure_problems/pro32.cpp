#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int findmax(int * num,int N)
{
	int max = num[0];
	int i;
	for(i=0;i<N;i++)
	{
		if(max<num[i])
		{
			max = num[i];
		}
	}
	return max;
}

int findmin(int * num,int N)
{
	int min = num[0];
	int i;
	for(i=0;i<N;i++)
	{
		if(min>num[i])
		{
			min = num[i];
		}
	}
	return min;
}

void print(int * A,int N)
{
	int m;
	cout<<"A[] = ";
	for(m=0;m<N;m++)
	{
		cout<<A[m]<<" ";
	}
	cout<<"\n";
}

//void sort(int * num,int N)
//{
//	int i,j,temp;
//	for(i=0;i<N;i++)
//	{
//		for(j=i+1;j<N;j++)
//		{
//			if(num[i]>num[j])
//			{
//				temp = num[i];
//				num[i] = num[j];
//				num[j] = temp;
//			}
//		}
//	}
//}

int main()
{
	int T,z;
	cout<<"Enter T : ";
	cin>>T;
	for(z=0;z<T;z++)
	{
		int N,i,j;
		cout<<"Enter N : ";
		cin>>N;
		int A[N],B[N];
//		int C[2*N];
		cout<<"Enter elements of A : ";
		for(i=0;i<N;i++)
		{
			cin>>A[i];
//			C[i] = A[i];
		}
		cout<<"Enter elements of B : ";
		for(i=0;i<N;i++)
		{
			cin>>B[i];
//			C[N+i] = B[i];
		}
		int l;
		int min,max,res[N],k=0;
		for(i=0;i<N;i++)
		{
			for(l=0;l<=N;l++)
			{
				for(j=l+1;j<N;j++)
				{
					min = findmin(A,N);
					max = findmax(A,N);
					cout<<"\n";
					print(A,N);
					cout<<"min = "<<min<<"max = "<<max<<endl;
					res[k] = max-min;
					k++;
					swap(A[l],B[j-i]);
				}
			}
			swap(A[i],B[l]);
		}
		cout<<"\n\nres = ";
		cout<<findmin(res,N)<<endl;
	}
	
	return 0;
}
