/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/
Control Statement related Problems
___________________________________
1(A).
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	for(int i=0; i<s.size(); i++)
	{
		cout<<++s[i];
	}
}
1(B).
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int marks;
    printf("Enter your marks ");
    scanf("%d",&marks);
    if(marks>=80)
    {
        printf("A+");
    }
    else if(marks>=75 && marks<80)
    {
        printf("A");
    }
    else if(marks>=70 && marks<75)
    {
        printf("A-");
    }
    else if(marks>=65 && marks<70)
    {
        printf("B+");
    }
    else if(marks>=60 && marks<65)
    {
        printf("B");
    }
    else if(marks>=55 && marks<60)
    {
        printf("B-");
    }
    else if(marks>=50 && marks<55)
    {
        printf("C+");
    }
    else if(marks>=45 && marks<50)
    {
        printf("C");
    }
    else if(marks>=40 && marks<45)
    {
        printf("D");
    }
    else if(marks<40)
    {
        printf("F");
    }

}
1(C).
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        char ch;
        printf("Enter any character: ");
        cin>>ch;


        if((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
        {
            printf("'%c' is alphabet.\n", ch);
        }
        else if(ch >= 48 && ch <= 57)
        {
            printf("'%c' is digit.\n", ch);
        }
        else
        {
            printf("'%c' is special character.\n", ch);
        }
    }
    return 0;
}
LOOP related Problems
___________________________________
2(A)
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cout<<"Input a number: \n";
	for(int i=1; i<=10; i++)
	{
		cout<<n<<" x "<<i<<" = "<<n*i<<endl;
	}
}
2(B).
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cout<<"Test Case=";
	cin>>t;
	while(t--)
	{
		int n,p=1;
		cin>>n;
		if(n==1 || n==0)
		{
			p=0;
		}
		else
		{
			for(int i=2; i<n; i++)
			{
				if(n%i==0)
				{
					p=0;
				}
			}
		}
		if(p==1)
		{
			cout<<n<<" is a prime number\n";
		}
		else
		{
			cout<<n<<" is not a prime number\n";
		}

	}
}
Array related Problems
___________________________________
2(A).
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[50],i,n,large=1,small=1;
	cout<<"Enter the number of elements : \n";
	cin>>n;
	cout<<"Input the array elements : \n";
	for(int i=0; i<n; i++)
	{
		cin>>g[i];
	}
	for(int i=0; i<n; i++)
	{
		if(a[i]>large)
		{
			large=a[i];
		}
		if(a[i]<small)
		{
			small=a[i];
		}
	}
	cout<<"The smallest element is "<<small<<endl;
	cout<<"The largest element is "<<large<<endl;
}
3(B).
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cout<<"Total Case=\n";
    cin>>t;
    int n,d=0,p=0;
    cout<<"How many Numbers you want to insert?\n";
    cin>>n;
    int a[n];
    for(int j=0; j<n; j++)
    {
        cin>>a[j];
    }
    for(int i=1; i<=t; i++)
    {

        int k=0;
        cout<<"Case:"<<i<<endl;
        cout<<"Enter Data You Want to search\n";
        cin>>d;
        for(k=0; k<n; k++)
        {
            if(a[k]==d)
            {
                p=k;
            }
        }
        if(p!=0)
        {
            cout<<d<<" is found at Index "<<p<<endl;
        }
        else
        {
            cout<<d<<" is not found at Array"<<endl;
        }

    }
}
