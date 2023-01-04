def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        l,r = 0,len(s)-1

        while l<r:
            while l<r and not self.isalphanum(s[l]):
                l+=1
            
            while l<r and not self.isalphanum(s[r]):
                r-=1

            if s[l].lower() != s[r].lower():
                return False
            
            l,r = l+1,r-1
        return True

def isalphanum(self,i):
    if(ord(i)>= 48 and ord(i)<=57 or
       ord(i)>= 65 and ord(i)<=90 or
       ord(i)>= 97 and ord(i)<=122 ):
        return True

    else: 
        return False