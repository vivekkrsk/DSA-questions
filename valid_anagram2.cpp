#include <bits/stdc++.h>
using namespace std;

 bool isAnagram(string s, string t) {
        // time complexity O(nlogn)
        // space complexity O(1)

        int lenS = s.length();
        int lenT = t.length();

        if(lenS != lenT)
        {
            return false;
        }

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        for(int i = 0; i < lenS; i++)
        {
            if(s[i] != t[i])
            {
                return false;
            }
        }

        return true;
    }

int main()
{
    string s = "anagram", t = "nagaram";

    isAnagram(s,t);

    return 0;
}