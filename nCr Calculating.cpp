/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/
#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int f=1;
    for(int i=2; i<=n; i++)
    {
        f*=i;
    }
    return f;
}

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;

    }

}

