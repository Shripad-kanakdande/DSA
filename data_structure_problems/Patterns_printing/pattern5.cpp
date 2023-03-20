#include <iostream>
using namespace std;
/*
    1
   121
  12321
 1234321
123454321
*/
int main()
{
	int i,j,k,l;
	for(i=1;i<=5;i++)
	{
		for(j=i;j<5;j++)
		{
			cout<<" ";
		}
		for(k=1;k<=i;k++)
		{
			cout<<k;
		}
		for(l=1;l<i;l++)
		{
			cout<<l;
		}
		cout<<endl;
	}
	return 0;
}

