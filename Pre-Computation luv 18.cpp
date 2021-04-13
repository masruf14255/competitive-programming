#include<bits/stdc++.h>
using namespace std;
/* hasing(**pre compute**)
given t testr cases and in each test case a number
n. print its Factorial for each test case %m
where m= 10^9+7


constraints

1<=T <=1065
1<=n<=10^5


const int m=1e9+7;
const int n=1e5+10;

long long fact[n]
int main()
{

	fact[0]=fact[1]=1;
	for(int i=2; i<n; i++)
	{
		fact[i]=fact[i-1]*i
	}
	int t;
	while(t--)
	{
		int n;
		cin>>n;

		cout<<fact[n]<<endl;
	}

}
*/

const int n=1e7+10;

int hsh[n];


int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; ++i)
	{
		cin>>a[i];
		hsh[a[i]]++;
	}
	int q;
	cin>>q;
	while(q--)
	{
		int x;
		cin>>x;
		cout<< hsh[x] <<endl;
}
	}

