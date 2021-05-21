/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/
#include <bits/stdc++.h>
using namespace std;

bool check(int x,int y, int z)
{
    int a=max(x, max(y,z));
    int b,c;
    if(a==x)
    {

        b=y;
        c=z;
    }
    else if(a=y)
    {
        b=x;
        c=z;
    }
    else
    {
        b=x;
        c=y;
    }
    if(a*a==b*b+c*c)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int x,y,z;
    cin>>x>>y>>z;

    if(check(x,y,z))
    {
        cout<<"Pythagorean trplet\n";
    }
    else
    {
        cout<<"Not a Pythagorean trplet\n";
    }
}

