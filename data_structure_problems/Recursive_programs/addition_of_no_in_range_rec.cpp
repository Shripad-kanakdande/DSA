#include <iostream>
using namespace std;
//Scan a range from user.Print addition of all odd integers in the range.

int add(int a,int b)
{
	if(a>b)
	{
		return 0;
	}
	int ans = add(a+1,b);
	return ans+a;
}

int main()
{
	int a,b;
	cout<<"Enter a : ";
	cin>>a;
	cout<<"Entetr b : ";
	cin>>b;
	int ans;
	if(a<b)
	{
		ans = add(a,b);
	}
	else
	{
		ans = add(b,a);
	}
	cout<<"Ans = "<<ans;
	return 0;
}

