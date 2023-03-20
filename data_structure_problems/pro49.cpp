#include<iostream>
using namespace std;

int main()
{
	int n;
    cin>>n;
    int num[n];
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        num[i] = i+1;
    }
    cout<<"num[] = ";
    for(i=0;i<n;i++)
    {
        cout<<num[i]<<" ";
    }
    int j = 0;
    for(i=n/2;i>=0;i--)
    {
        arr[j] = num[i];
        j++;
    }
    for(i=(n/2)+1;i<n;i++)
    {
        arr[i] = num[i];
    }
//    cout<<"num[] = ";
//    for(i=0;i<n;i++)
//    {
//        cout<<num[i]<<" ";
//    }
    cout<<endl<<"arr[] = ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
