#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p=1;
    cin>>n;
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
        cout<<"Prime";
    }
    else
        cout<<"Not prime";

}
