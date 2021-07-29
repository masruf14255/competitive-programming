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

int main()
{
    int arr[MAX_SIZE];
    int i,size,num,pos;


    cout<<"Enter size of the array  : ";
    cin>>size;

    cout<<"Enter elements in array : ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter element you want to insert : ";
    cin>>num;
    cout<<"Enter the position : ";
    cin>>pos;

    if(pos>size+1 || pos<=0)
    {
        "Invalid\n";
    }
    else
    {
        for(i=size; i>=pos; i--)
        {
            arr[i]=arr[i-1];
        }
        arr[pos-1]=num;
        size++;

        cout<<"Array elements after insertion : ";
        for(i=0; i<size; i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}
