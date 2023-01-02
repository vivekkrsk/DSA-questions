#include <bits/stdc++.h>
using namespace std;

 bool isAnagram(string s, string t) {
        // time complexity O(n)
        // space complexity O(n)

        int lenS = s.length();
        int lenT = t.length();

        if(lenS != lenT)
        {
            return false;
        }

        unordered_map<char, int> Map;

        for( auto i : s)
            Map[i]++;

        for( auto i : t){
            Map[i]--;
            if(Map[i]==0)
             Map.erase(i);
        }

        return Map.empty();

    }

int main()
{
    string s = "anagram", t = "nagaram";

    isAnagram(s,t);

    return 0;
}