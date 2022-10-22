#include <bits/stdc++.h>
using namespace std;

bool IsValid(string s)
{
    int n = s.size();

    stack<char> st;
    bool ans = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '{' or s[i] == '(' or s[i] == '[')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (!st.empty() and st.top() == '(')
            {
                st.pop();
            }
            else
            {
                ans = false;
            }
        }
        else if (s[i] == ']')
        {
            if (!st.empty() and st.top() == '[')
            {
                st.pop();
            }
            else
            {
                ans = false;
            }
        }
        else if (s[i] == '}')
        {
            if (!st.empty() and st.top() == '{')
            {
                st.pop();
            }
            else
            {
                ans = false;
            }
        }
    }
    if (!st.empty())
        {
            return false;
            return ans;
        }
}

int main()
{
    string s = "{([])}";
    if (IsValid(s))
    {
        cout << "Valid String " << endl;
    }
    else
    {
        cout << "Invalid String" << endl;
    }

    return 0;
}

Output of the code is-
Valid for :{([])} 
Invalid for :{([]) 
Invalid for :{([)}]
