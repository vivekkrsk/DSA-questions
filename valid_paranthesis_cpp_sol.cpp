#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    stack<char> stack;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            stack.push(s[i]);
        }
        else
        {
            char top = stack.top();
            if (stack.empty())
            {
                return false;
            }

            else if (top == '(' && s[i] == ')')
            {
                stack.pop();
            }

            else if ((top == '(' && s[i] == '}') || top == '(' && s[i] == ']')
            {
                return false;
            }

            else if (top == '{' && s[i] == '}')
            {
                stack.pop();
            }

            else if ((top == '{' && s[i] == ')') || top == '{' && s[i] == ']')
            {
                return false;
            }

            else if (top == '[' && s[i] == ']')
            {
                stack.pop();
            }

            else if ((top == '[' && s[i] == '}') || top == '[' && s[i] == ')')
            {
                return false;
            }
        }
    }
    return stack.empty();
}

int main()
{

    return 0;
}