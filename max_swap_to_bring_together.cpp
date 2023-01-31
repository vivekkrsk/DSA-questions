#include <bits/stdc++.h>
using namespace std;
int main() {
    // your code goes here
	int n,k;
	cin >> n>>k;
	int arr[n];
	int count=0,swap=0;
	for(int i =0; i<n; i++)
	{
		cin >> arr[i];
		if(arr[i]<=k)
		{
			count++;
		}
	}
	for(int i =0; i<count;i++)
	{
		if(arr[i]>k)
			swap++;
	}
	int min_swap = swap;
	for(int i=count;i<n;i++)
	{
		if(arr[i]>k && arr[i-count]<=k)
		{
			swap++;
		}
		if(arr[i]<=k && arr[i-count]>k)
		{
			swap--;
		}
		min_swap = min(min_swap,swap);
	}
	cout<<min_swap;
    return 0;
}