/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int cur=0;
    for(int i=0; i<n; i++)
    {
        cur=0;
        for(int j=i; j<n; j++)
        {
            cur+=a[j];
            cout<<cur<<endl;
        }
    }
    return 0;
}
