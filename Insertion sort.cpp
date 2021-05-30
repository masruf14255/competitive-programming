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
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=1; i<n; i++)
    {
        int crrnt=arr[i];
        int j=i-1;
        while(arr[j]>crrnt && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=crrnt;
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}
