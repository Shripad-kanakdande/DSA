#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int A,B,C,D;
	    cin>>A>>B>>C>>D;
	    int c = 0,i;
	    if(C>B)
	    {
	        for(i=A;i<=B;i++)
    	    {
    	        c++;
    	    }
    	    for(i=C;i<=D;i++)
    	    {
    	        c++;
    	    }
    	    cout<<c<<endl;
	    }
	    if(C<A)
	    {
	        for(i=C;i<=A;i++)
    	    {
    	        c++;
    	    }
    	    for(i=B;i<=D;i++)
    	    {
    	        c++;
    	    }
    	    cout<<c<<endl;
	    }
	    if(C>=A && C<B)
	    {
	        for(i=A;i<B;i++)
    	    {
    	        c++;
    	    }
    	    for(i=B;i<=D;i++)
    	    {
    	        c++;
    	    }
    	    cout<<c<<endl;
	    }
	    if(B == c)
	    {
	        for(i=A;i<=B;i++)
    	    {
    	        c++;
    	    }
    	    for(i=C;i<=D;i++)
    	    {
    	        c++;
    	    }
    	    cout<<c-1<<endl;
	    }
	}
	return 0;
}

