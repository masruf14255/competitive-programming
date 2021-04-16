#include <bits/stdc++.h>
using namespace std;

int bS(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return bS(arr, l, mid - 1, x);
        return bS(arr, mid + 1, r, x);
    }
    return -1;
}
int main(void)
{
    int e,x;
    cin>>e;
    int arr[e];
    for(int i=0; i<e; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter element you want to search : ";
    cin>>x;
    int n = sizeof(arr);
    int result = bS(arr, 0, n - 1, x);
    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result;
    return 0;
}
