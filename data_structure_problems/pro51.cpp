#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    char S[n];
	    int i,c = 0;
	    for(i=0;i<n;i++)
	    {
	        cin>>S[i];
	        if(S[i] == '1')
	        {
	            c++;
	        }
	    }
	    if(c == 0)
	    {
	        cout<<"0"<<endl;
	    }
	    else
	    {
	        if(c<=n/2)
	        {
	            cout<<c<<endl;
	        }
	        if(c>n/2)
	        {
	            cout<<c-n<<endl;
	        }
	    }
	}
	return 0;
}

