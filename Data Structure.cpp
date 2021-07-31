/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/
// ASCII VALUE SMALL LETTER a-z (97-122)
//transform(su.begin(), su.end(), su.begin(), ::toupper);
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long l;
typedef vector<int> vint;
typedef pair<int,int> pint;
typedef unsigned long long ull;
typedef pair<int, int> PII;

#define sc scanf
#define lf(i, a, b) for(ll i=a;i<b;i++)
#define fast  (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define pf printf
#define nl pf("\n")
#define INF_MAX 2147483647
#define INF_MIN -2147483647
#define INF_LL 9223372036854775807
#define INF 2000000000
#define PI acos(-1.0)
#define EPS 1e-9
#define LL long long
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define setzero(a) memset(a,0,sizeof(a))
#define setdp(a) memset(a,-1,sizeof(a))
#define fr(i,n)      for (ll i=0;i<n;i++)
#define fr1(i,n)     for(ll i=1;i<=n;i++)
#define pfl(x)       printf("%lld\n",x)
#define endl        "\n"
#define pb         push_back
#define asort(a)   sort(a,a+n)
#define dsort(a)   sort(a,a+n,greater<int>())
#define vasort(v)  sort(v.begin(), v.end());
#define vdsort(v)  sort(v.begin(), v.end(),greater<int>());

#define MAX_SIZE 100

typedef struct Stu
{

    char name[25];
    int age;
    float cgpa;
} s1;



void display(s1 s1[])
{
    int i,n=3;
    for(i=0; i<n; i++)
    {
        cout<<"Name of this student : "<<s1[i].name<<endl;
        cout<<"Age of this student : "<<s1[i].age<<endl;
        cout<<"CGPA of this student : "<<s1[i].cgpa<<endl;
    }
}

/*typedef struct player
{
    char name[25];
    int age;
    float run_rate;
    int total_match_played;
    int team;
}p1,p2;*/


int main()
{
    /*struct Stu s1;
    s1.age=28;
    strcpy(s1.name,"ryan");
    s1.cgpa=3.67;

    //cout<<s1.age<<endl;
    //cout<<s1.name<<endl;
    display(s1);*/

    s1 s[10];
    int i,n=3;
    for(i=0; i<n; i++)
    {
        cin>>s[i].name;
        cin>>s[i].age;
        cin>>s[i].cgpa;
    }
    display(s);
}
