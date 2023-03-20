#include<iostream>
using namespace std;

int main()
{
	int N = 23;
	int num = N;
    int rem;
    int C = 0;
    while(1)
    {
    	if(num == 0)
    	{
    		break;
		}
        rem = num%10;
        num = num/10;
        if(N%rem == 0)
        {
        	C++;
		}
    }
    cout<<C<<endl;
    
    return 0;
}
