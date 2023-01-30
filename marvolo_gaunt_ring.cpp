#include <climits>
#include <iostream>
using namespace std;

int main() {

    int n;
	long long p,q,r;
	cin >> n>>p>>q>>r;
	long long arr[n];
	for(int i =0; i<n;i++)
	{
		cin >> arr[i];
	}
	long long premax[n];
	premax[0]=p*arr[0];
	
	for(int i=1; i<=n-1;i++)
	{
		premax[i]=max(premax[i-1],(p*arr[i]));
	}
	
	long long submax[n];
	submax[n-1]=r*arr[n-1];
	for(int i=n-2; i>=0;i--)
	{
		submax[i]=max(submax[i+1],(r*arr[i]));
	}
	
	long long maxres =LLONG_MIN;
	for(int i=0; i<=n-1;i++)
	{
		maxres = max(maxres, (premax[i]+q*arr[i]+submax[i]));
	}
	
	cout << maxres;
return 0;

}