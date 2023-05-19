#include <bits/stdc++.h>
using namespace std;

int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
   vector<int> dp(n,0);
   int k=2;
   dp[0]=0;
   for (int i = 0; i < n; i++)
   {
        int minsteps=INT_MAX;
        for(int j =1; j<+k; j++)
        {
            if(i-j>=0)
            {
                int jump = dp[i-j]+abs(heights[i]-heights[i-j]);
                minsteps= min(minsteps, jump);
            }
            dp[i]=minsteps;
        }
        
   }
   return dp[n-1];
   

    
}

int main()
{
    

    return 0;
}