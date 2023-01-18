def findMaxAverage(self, nums: List[int], k: int) -> float:
        res,maxsum=0,-1000000000
        l,r=0,k-1

        for i in range(k):
            res+=nums[i]
        maxsum= max(res,maxsum)
        
        

        for i in range(k,len(nums)):
            
            res += nums[i]-nums[i-k]
            maxsum= max(res,maxsum)
        return maxsum/k