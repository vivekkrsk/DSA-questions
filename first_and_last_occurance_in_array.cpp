#include <bits/stdc++.h>
using namespace std;

int first_occur(int arr[], int x, int f, int l)
{
    int fo=INT_MIN;
    while (f <= l)
    {

        int mid = f + (l - f) / 2;

        if (arr[mid] == x)
        {
            fo=mid;
            l = mid - 1;
        }

        if (arr[mid] <= x)
        {
            l = mid - 1;
        }
        else
        {
            f = mid + 1;
        }
    }
    if (fo>INT_MIN)
    {
        return fo;
    }
    else
    {
        return -1;
    }
    
    
}

int last_occur(int arr[], int x, int f, int l)
{
    int lo=INT_MAX;
    while (f <= l)
    {

        int mid = f + (l - f) / 2;

        if (arr[mid] == x)
        {
            lo=mid;
            f = mid + 1;
        }

        if (arr[mid] < x)
        {
            l = mid - 1;
        }
        else
        {
            f = mid + 1;
        }
    }
    if (lo<INT_MAX)
    {
        return lo;
    }
    else
    {
        return -1;
    }
    
    
}

int main()
{
    int n, x;
    cin >> n >> x;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int first = first_occur(arr,x,0,n-1);
    int last = last_occur(arr,x,0,n-1);

    cout<<"first occurance "<<first<<endl;
    cout<<"last occurance "<<last<<endl;



    return 0;
}