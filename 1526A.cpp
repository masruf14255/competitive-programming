/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/
#include<bits/stdc++.h>
using namespace std;
int a[100];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<2*n;i++) cin>>a[i];
        sort(a,a+2*n);
        for(int i=0;i<2*n-1;i++)
        {
            if(i&1 && a[i]<a[i+1]) swap(a[i],a[i+1]);
        }
        for(int i=0;i<2*n;i++) cout<<a[i]<<' ';
        cout<<endl;
    }
}
