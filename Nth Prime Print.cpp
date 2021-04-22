#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<=t; i++)
    {
    int n=0,p=1;
    n=i;
    if(n==0 || n==1)
    {
        p=0;
    }
    for(int i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            p=0;
        }
    }
    if(p==1)
    {
        cout<<n<<endl;

    }

    }
}

