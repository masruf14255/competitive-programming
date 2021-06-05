/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int getbit(int n, int pos)
    {
        return ((n&(1<<pos))!=0);
    }


int setbit(int n,int pos)
{
    return (n|(1<<pos));
}

int clearbit(int n, int pos)
{
    int mask=~(1<<pos);
    return (n&mask);
}

int updatebit(int n,int pos,int value)
{
    int mask=~(1<<pos);
    n=n&mask;
    return (n| (value<<pos));
}
int main()
{
    //cout<<getbit(5,2)<<endl;
    //cout<<setbit(5,10)<<endl;
    //cout<<clearbit(5,10)<<endl;
    cout<<updatebit(5,1,1);
    return 0;
}
