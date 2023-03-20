#include <iostream>
using namespace std;

void twoscomp(int * num,int x)
{
	int i;
	for(i=x;i>=0;i--)
	{
		num[i] = !num[i];
	}
}

void binary()
{
	int i;
   int x;
   cin>>x;
   int num[16];
   for(i=15;i>=0;i--)
   {
   		num[i] = x%2;
   		x = x/2;
   }
   for(i=0;i<16;i++)
   {
   		num[i] = !num[i];
   }
   for(i=0;i<16;i++)
   {
   		if(num[i] == 1)
   		{
   			twoscomp(num,i);
   			break;
		}
   }
   for(i=0;i<16;i++)
   {
   		cout<<num[i];
   }
}

int main() 
{
   binary();
   
   return 0;
}

