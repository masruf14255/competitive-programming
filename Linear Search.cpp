/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/
#include <bits/stdc++.h>
using namespace std;


int ls(int ar[],int n,int x)
{
    int i;
    for(i=0; i<n; i++)
        if(ar[i]==x)
            return i+1;
        return -1;
}
int main()
{
	int n;
	cin>>n;
	int ar[n];
	for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    int x;
    cin>>x;
    int l=sizeof(ar)/sizeof(ar[0]);
    int result=ls(ar,l,x);
    (result==-1)?cout<<"Element is not present here"
    : cout<<"Element present here\n"<<result;
    return 0;

}
