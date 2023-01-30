class Solution(object):
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        k=k%len(nums)
        nums.reverse()
        nums[0:k]=nums[0:k][::-1]
        nums[k:len(nums)]=nums[k:len(nums)][::-1]