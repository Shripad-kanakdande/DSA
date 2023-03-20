#include <iostream>
using namespace std;
//Scan base and power from user.Find base raised to power.

int calculate(int base,int power)
{
	if(power==0)
	{
		return 1;
	}
	int ans = calculate(base,power-1);
	return ans*base;
}

int main()
{
	int base,power;
	cout<<"Enter base : ";
	cin>>base;
	cout<<"Enter power : ";
	cin>>power;
	int ans = calculate(base,power);
	cout<<"Ans = "<<ans;
	
	return 0;
}

