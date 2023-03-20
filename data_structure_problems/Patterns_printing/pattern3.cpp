#include <iostream>
using namespace std;
/*
----E
---DE
--CDE
-BCDE
ABCDE
*/
int main()
{
	int i,j,k;
	for(i='E';i>='A';i--)
	{
		for(j=i;j>='A';j--)
		{
			cout<<"-";
		}
		for(k=i;k<='E';k++)
		{
			cout<<(char)k;
		}
		cout<<endl;
	}
	return 0;
}

