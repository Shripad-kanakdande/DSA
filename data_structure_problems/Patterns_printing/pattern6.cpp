#include <iostream>
using namespace std;
/*
E
DE
CDE
BCDE
ABCDE
*/
int main()
{
	char i,j;
	for(i='E';i>='A';i--)
	{
		for(j=i;j<='E';j++)
		{
			cout<<j;
		}
		cout<<endl;
	}
	return 0;
}

