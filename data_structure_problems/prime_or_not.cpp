#include <iostream>
using namespace std;
//Scan a number from user.Check if it is prime or not.

void isprime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i == 0)
		{
			cout<<"Not prime!"<<endl;
			return ;
		}
	}
	cout<<"Prime!"<<endl;
}

int main()
{
	int i,n;
	cout<<"Enter a number : ";
	cin>>n;
	isprime(n);
	return 0;
}

