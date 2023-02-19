#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsofar=INT_MIN,endsofar=0;

        for(int i =0; i<nums.size();i++)
        {
            endsofar += nums[i];
            maxsofar = max(maxsofar,endsofar);
            if(endsofar<0)
            {
                endsofar=0;
            }
            
        }
        return maxsofar;
    }
};

int main()
{
    

    return 0;
}