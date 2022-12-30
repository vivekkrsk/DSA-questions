#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i - 1] == nums[i])
        {
            return true;
        }
    }
    return false;
}

bool containsDuplicate2(vector<int>& nums) {
        set<int> s;
        for(int i=0; i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        if(s.size()==nums.size())
         return false;
        else
         return true;
    }

int main()
{
    vector<int> nums;
    nums={1,2,3,1};
    (containsDuplicate(nums))?cout<<"Contain Duplicate":cout<<"All element are distinct";

    return 0;
}