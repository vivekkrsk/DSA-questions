#include <iostream>
using namespace std;
int main() {
    // your code goes here
	int n;
	cin >> n;
	int height[n];
	for(int i =0; i<n; i++)
	{
		cin >> height[i];
	}
	
	int premax[n];
	premax[0]=height[0];
	for(int i=1; i<n; i++)
	{
		premax[i] = max(premax[i-1],height[i]);
	}
	
	int submax[n];
	submax[n-1]=height[n-1];
	for(int i = n-2; i>=0; i--)
	{
		submax[i]=max(submax[i+1], height[i]);
	}
	
	 long long wt=0;
	long long decideh;
	for(int i = 1; i<n-1; i++)
	{
		decideh=min(premax[i],submax[i]);
		if(decideh>height[i])
		{
			wt +=(decideh-height[i]);
		}
		 
	}
	cout << wt<<endl;
    return 0;
}