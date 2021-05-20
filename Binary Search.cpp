/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/#include <bits/stdc++.h>
using namespace std;
int bs(int ar[],int l,int r,int x)
{
    if(r>=l)
    {
        int mid=l+(r-l)/2;


        if(ar[mid]==x)
            return mid;

        if(ar[mid]>x)\
            return bs(ar,l,mid-1,x);

        return bs(ar, mid+1,r,x);
    }
    return -1;
}
int main(void)
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
    int result =bs(ar,0,l-1,x);
    (result==-1)?cout<<"Element is not present here"
                     : cout<<"Element is present here index\n"<<result;
    return 0;
}

