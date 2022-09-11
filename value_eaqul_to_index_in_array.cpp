#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==(i+1))
        {
            v.push_back(arr[i]);
        }
    }
    cout << v.size()<<" element exist\n";
    for(int i=0; i<v.size();i++)
    {
        cout<<v[i]<<", ";
    }
    cout<<endl;

    return 0;
}