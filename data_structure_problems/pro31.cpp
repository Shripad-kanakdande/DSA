#include <iostream>
using namespace std;

void sort(int * num,int N)
{
    int i,j,temp;
    for(i=0;i<N;i++)
    {
        for(j=0;i<N;j++)
        {
            if(num[i]>num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
}

int main() {
	// your code goes here
	int T;
	int i;
	cin>>T;
	for(i=0;i<T;i++)
	{
	    int N;
	    cin>>N;
	    int A[N],B[N],C[2*N];
	    for(i=0;i<N;i++)
	    {
	    	cout<<"HI";
	        cin>>A[i];
	        C[i] = A[i];
	    }
//	    cout<<"\n";
	    int j=i;
	    for(i=0;i<N;i++)
	    {
	        cin>>B[i];
	        C[j] = A[i];
	        j++;
	    }
	    
		sort(C,2*N);
	    
	    int min = C[2*N-1] - C[0];
	    for(i=0;i<2*N-1;i++)
	    {
	        if(min > C[i+N-1] - C[i])
	        {
	            min = C[i+N-1] - C[i];
	        }
	    }
	    cout<<min<<endl;
	}
	return 0;
}

