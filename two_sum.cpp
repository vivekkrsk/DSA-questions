#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int f=0,l=nums.size()-1,mid;
       while(f<=l)
       {
            mid=f+(l-f)/2;
           if(nums[mid]==target)
           {
               return mid;
           }
           else if(nums[mid]>target && nums[mid-1]<target)
           {
               return mid;
           }
            else if(nums[mid]<target && nums[mid+1]>target)
           {
               return mid+1;
           }
           
           if(nums[mid]>target)
           {
               l=mid-1;
           }
           else
           {
               f=mid+1;
           }
       }
    }
};

int main()
{
    

    return 0;
}