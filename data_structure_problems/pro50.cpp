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
	    cin>>S;
	    int i;
	    int x = S[0];
	    for(i=0;i<n;i++)
	    {
//	    	cout<<freq[i]<<" ";
			if(x<S[i])
			{
				x = S[i];
			}
		}
		
	    int freq[x] = {0};
	    for(i=0;i<x;i++)
	    {
	        freq[S[i]]++;
	    }
			    
	    for(i=0;i<=x;i++)
	    {
//	        cout<<freq[i]<<" ";
	        if(freq[i]%2 != 0)
	        {
	            cout<<"NO"<<endl;
	            break;
	        }
	    }
	    if(i == x)
	    {
	        cout<<"YES"<<endl;
	    }
	    cout<<endl;
	}
	return 0;
}

