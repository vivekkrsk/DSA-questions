#include <iostream>
#include <climits>
using namespace std;
int main() {
    // your code goes here
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i<n; i++)
	{
		cin >> arr[i];
	}
	
	int cmax=INT_MIN;
	int count=0;
	for(int i=0;i<n;i++)
	{
		cmax=max(cmax,arr[i]);
		if(cmax==i)
		{
			count++;
		}
	}
	cout << count << endl;
    return 0;
}