#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int k;
        cin>>k;
        string s;
        cin>>s;

        string prev=s;
        while(k)
        {
            map<int,int>mp;
            for(int i=1; i<n; ++i)
            {
                if(i>0 && i<n-1)
                {
                    if(s[i-1]=='1' && s[i+1]=='1')
                        continue;
                }

                if(s[i]=='0')
                {
                    if(s[i-1]=='1')
                        mp[i]=1;
                }

            }
            for(int i=0; i<n-1; ++i)
            {
                if(i>0 && i<n-1)
                {
                    if(s[i-1]=='1' && s[i+1]=='1')
                        continue;
                }
                if(s[i]=='0')
                {
                    if(s[i+1]=='1')
                        mp[i]=1;
                }
            }

            for(auto it:mp)
                s[it.first]='1';


            k--;

            if(s==prev)
                break;

            prev=s;
        }

        cout<<s<<"\n";
    }
}
