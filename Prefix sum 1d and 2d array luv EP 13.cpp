/*
Prefix sum
1d-array;
2d array;

#given array a of n integers. given
q queries ans each query given l and r printf sum of array elements from index
l to r(l,r includeed);

#include<bits/stdc++.h>
using namespace std;
const int n= 1e5+10;
int a[n];
int main()
{
	int n;
	cin>>n;
	for(int i=1; i<=n; ++i)
	{
		cin>>a[i];
	}
	int q;
	cin>>q;
	while(q--)
	{
		int l,r;
		cin>>l>>r;
		long long sum=0;
		for(int i=l; i<=r; l++)
		{
			sum+=a[i];
		}
		cout<<sum<<endl;
	}
}*/
#include<bits/stdc++.h>
using namespace std;
const int n=1e3+10;
int ar[n][n];
long long pf[n][n];
int main()
{
	int n;
	cin>>n;
	for(int i=1; i<=n; ++i)
	{
		for(int j=1; j<=n; j++)
		{
			cin>>ar[i][j];
			pf[i][j]=ar[i][j]+pf[i-1][j]+pf[i][j-1]-pf[i-1]pf[j-1];
		}
	}
	int q;
	cin>>q;
	while(q--)
	{
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		cout<<pf[c][d]-pf[a-1][d]-pf[c][d-1]-pf[a-1][b-1];

	}
}
