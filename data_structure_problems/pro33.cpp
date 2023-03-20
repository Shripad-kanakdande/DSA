#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,u;
//	cout<<"Enter T : ";
	cin>>T;
	for(u=0;u<T;u++)
	{
	    char S[5],T[5],M[5];
//	    cout<<"\nEnter S : ";
	    gets(S);
	    gets(S);
//	    cout<<"Enter T : ";
		gets(T);
//	    cout<<"\n\nS = "<<S<<"\n"<<"T = "<<T<<endl;
	    int i,j = 0;
	    for(i=0;i<5;i++)
	    {
	        if(S[i] == T[i])
	        {
	            M[i] = 'G';
	        }
	        if(S[i] != T[i])
	        {
	            M[i] = 'B';
	        }
	    }
	    M[5] = '\0';
	    cout<<M<<endl;
	}
	return 0;
}

