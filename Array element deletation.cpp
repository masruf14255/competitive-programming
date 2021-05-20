#include <bits/stdc++.h>
using namespace std;
int main()
{
	int arrs=5,index,i,j;
	int age[arrs];

	cout<<"Input your ages: \n";
	for(i=0; i<arrs; i++)
	{
		cin>>age[i];
	}
	cout<<"input 0 based ondex number you want to delete\n";
	cin>>index;

	j=index;
	while(j<arrs-1)
	{
		age[j]=age[j+1];
		j++;
	}
	arrs=arrs-1;
	for(int i=0; i<arrs; i++)
	{
		cout<<age[i]<<" ";
	}
}

