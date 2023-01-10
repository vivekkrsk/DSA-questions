def search(self, nums: List[int], target: int) -> int:

        l,r=0,len(nums)-1,

        while l <= r:
            mid = l+((r-l)//2)

            if nums[mid] > target:
                r=mid-1

            elif nums[mid] < target:
                l=mid+1
            elif nums[mid] == target:
                return mid
        return -1