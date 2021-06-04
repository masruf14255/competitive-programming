/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/
1.(A)
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int merge_arrays(int arr1[], int arr2[], int arr3[], int m, int n)
{
    int i,j;
    for(i = 0; i < m; i++)
    {
        arr3[i] = arr1[i];
    }
    for(i = m, j = 0 ; i < m + n; i++, j++)
    {
        arr3[i] = arr2[j];
    }
}
int main()
{
    int n,m,i;
    cout<<"Size of Array – 1: N1 = \n";
    cin>>m;
    int arr1[m];
    cout<<"Enter "<<m<<" array elements\n";
    for(i = 0; i<m; i++)
    {
        cin >> arr1[i];
    }
    cout<<"Size of Array – 2: N2 = \n";
    cin>>n;
    int arr2[n];
    cout<<"Enter "<<n<<" array elements\n";
    for(i = 0; i<n; i++)
    {
        cin >> arr2[i];
    }
    int arr3[m+n];
    merge_arrays(arr1,arr2,arr3,m,n);
    cout << "\nMerged Array in Sorted order\n\n";
    sort(arr3, arr3 +(m+n));
    for(i = 0; i < n + m; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;
    return 0;
}


1.(B)
#include <bits/stdc++.h>
using namespace std;
int bs(int ar[],int l,int r,int x)
{
    if(r>=l)
    {
        int mid=l+(r-l)/2;


        if(ar[mid]==x)
            return mid;

        if(ar[mid]>x)\
            return bs(ar,l,mid-1,x);

        return bs(ar, mid+1,r,x);
    }
    return -1;
}
int main(void)
{
    int t;
    cout<<"Total Case = ";
    cin>>t;

    int n;
    cout<<"\nHow many Numbers you want to insert?\n";
    cin>>n;
    int ar[n];
    cout<<"Enter "<<n<<" array elements\n";
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    for(int i=1; i<=t; i++)
    {
        int x;
        cout<<"\nCase:"<<i<<endl;
        cout<<"Enter Data You want to search\n";
        cin>>x;
        int l=sizeof(ar)/sizeof(ar[0]);
        int result =bs(ar,0,l-1,x);
        (result==-1)?cout<<x<<" is not found in the Array"
                         : cout<<x<<" is found at Index \n"<<result;
    }
}
1(C)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100], freq[100];
    int size, i, j, count;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }
    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }
    printf("\nFrequency of all elements of array : \n");
    for(i=0; i<size; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}
2.(A)
#include <bits/stdc++.h>
using namespace std;

float ac(float r)
{
    float ans;
    ans= 3.14*r*r;
    return ans;
}
int main() {
   float r, area_circle;
   printf("Enter the radius of circle : ");
   scanf("%f", &r);
   cout<<"\nArea of circle \n"<<ac(r);

   return 0;
}
2.(B)
#include<bits/stdc++.h>
using namespace std;
int find_maximum(int[], int);

int main() {
  int c, array[100], size, location, maximum;

  printf("Input number of elements in array\n");
  scanf("%d", &size);

  printf("Enter %d integers\n", size);

  for (c = 0; c < size; c++)
    scanf("%d", &array[c]);

  location = find_maximum(array, size);
  maximum  = array[location];

  printf("Maximum element  = %d\n", maximum);
  return 0;
}

int find_maximum(int a[], int n) {
  int c, index = 0;

  for (c = 1; c < n; c++)
    if (a[c] > a[index])
      index = c;

  return index;
}

