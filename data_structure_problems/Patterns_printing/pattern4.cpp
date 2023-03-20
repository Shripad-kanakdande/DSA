#include <iostream>
using namespace std;
/*
    *
   **
  ***
 ****
*****
*/
int main()
{
	int i,j,k;
	for(i=0;i<4;i++)
	{
		for(j=i;j<3;j++)
		{
			cout<<" ";
		}
		for(k=0;k<i+1;k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	return 0;
}

