def maxProfit(self, prices: List[int]) -> int:
        maxprofit=0
        l,r = 0,1

        while r<len(prices):
            if prices[r]>prices[l]:
                profit= prices[r]-prices[l]
                maxprofit= max(profit,maxprofit)
            else:
                l=r
            r+=1
        return maxprofit