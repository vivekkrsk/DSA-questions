class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        min_price,max_profit='infinity',0
        for i in range(len(prices)):
            min_price=min(min_price,prices[i])
            max_profit = max(max_profit,prices[i]-min_price)

        return max_profit