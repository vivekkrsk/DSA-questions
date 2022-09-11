// https://practice.geeksforgeeks.org/problems/stack-permutations/1

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int isStackPermutation(int N, vector<int> &A, vector<int> &B)
    {
        stack<int> s;
        int j = 0;
        for (int i = 0; i < N; i++)
        {
            s.push(A[i]);

            while (!s.empty() and s.top() == B[j])
            {
                s.pop();

                j++;
            }
        }
        if (s.empty())
        {
            return 1;
        }
        return 0;
    }
};

int main()
{

    return 0;
}
