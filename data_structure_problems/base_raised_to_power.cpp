#include <iostream>
using namespace std;
//Scan base and power from user.Find base raised to power.
int main()
{
	int base,pow;
	cout<<"Enter base : ";
	cin>>base;
	cout<<"Enter power : ";
	cin>>pow;
	int ans = 1;
	int i;
	for(i=0;i<pow;i++)
	{
		ans = ans * base;
	}
	cout<<"ans = "<<ans;
	return 0;
}

