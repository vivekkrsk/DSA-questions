#include <iostream>
using namespace std;
int main() {
    // your code goes here
	int n; 
	cin>>n;
	int prices[n];
	for(int i =0; i<n;i++)
	{
		cin >> prices[i];
	}
    int submax[n];
    submax[n-1]=prices[n-1];
    for(int i=n-2;i>=0;i--)
    {
        submax[i]=max(submax[i+1],prices[i]);
    }
    int maxprofit=0;
    for(int i=0;i<n;i++)
    {
        maxprofit = max(maxprofit,(submax[i]-prices[i]));
    }
    cout <<maxprofit<<endl;
    return 0;
}