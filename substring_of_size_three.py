def countGoodSubstrings(self, s: str) -> int:
        l,r,res=0,2,0

        while r<len(s):
            if (s[l]!=s[l+1]) and (s[l]!=s[l+2]) and (s[l+1]!=s[l+2]):
                res +=1
            l+=1
            r+=1
        return res