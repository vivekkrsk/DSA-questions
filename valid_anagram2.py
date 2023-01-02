def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        
        if len(s) != len(t):
            return False
        
        counts,countt={},{}

        for i in range(len(s)):
            counts[s[i]]= 1+ counts.get(s[i],0)
            countt[t[i]]= 1+ countt.get(t[i],0)

        for x in counts:
            if counts[x] != countt.get(x,0):
                return False

        return True
