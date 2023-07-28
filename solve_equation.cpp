#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& arr, int n, int k){
    int l=0, h=n-1;
    
    int fo=-1;
    
    while(l<=h){
        int m=(l+h)/2;
        
        if(arr[m]<k) l=m+1;
        else if(arr[m]>k) h=m-1;
        else{
            fo=m;
            h=m-1;
            // if(m==0) {
            //     fo=m;
            //     break;
            // }
            // else if(arr[m-1]!=k ){
            //     fo=m;
            //     break;
            // }
            // else h=m-1; 
        }
    }
    
     l=0, h=n-1;
     int lo=-1;
    while(l<=h&& fo != -1){
        int m=(l+h)/2;
        
        if(arr[m]<k) l=m+1;
        else if(arr[m]>k) h=m-1;
        else{
            lo=m;
            l=m+1;
            // if(m==n-1) {
            //     lo=m;
            //     break;
            // }
            // else if(arr[m+1]!=k ){
            //     lo=m;
            //     break;
            // }
            // else l=m+1; 
        }
    }
    // cout<< (lo-fo)+1<< endl;
    
    if(fo != -1) return (lo-fo)+1;
    return 0;
}

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n,0) ;
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        
        vector<int> lhs;
        vector<int> rhs;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                for(int k=0; k<n; k++){
                    int l=(v[i]*v[j])+k;
                    lhs.push_back(l);
                    
                    if(v[i]!=0){
                        int r=(v[i]*v[j])+k;
                        rhs.push_back(r);
                    }
                }
            }
        }
        sort(rhs.begin(), rhs.end());
        int ans=0;
        
        for(int i=0; i<lhs.size(); i++){
            int temp=search(rhs,rhs.size(),lhs[i]);
            ans+= temp;
        }
        cout<<ans<<endl;
        
    }
    return 0;
}
