class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        mp1,mp2,pr1,pr2='infinity','infinity', 0,0

        for i in range(len(prices)):
            mp1 = min(mp1, prices[i])
            pr1 = max(pr1,prices[i]-mp1)
            mp2 = min(mp2, prices[i]-pr1)
            pr2 = max(pr2, prices[i]-mp2)

        return pr2
