#include <iostream>
using namespace std;

int main() {
    // your code goes here
	long long n,m=1000000007;
	cin >> n;
	long long arr[n];
	for(long long i =0; i<n; i++)
	{
		cin >> arr[i];
	}
	long long ans=0;
	for(long long i=0; i<n;i++)
	{
		long long contri = (((((i+1)%m)*((n-i)%m) )%m )*(arr[i]%m))%m;
		ans = ((ans%m)+(contri%m))%m;
	}
	cout << ans<<endl;
    return 0;
}