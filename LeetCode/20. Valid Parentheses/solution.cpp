#include <string>
#include <stack>

class Solution
{
    public:
        bool isValid(std::string s)
        {
            if(s.length() == 1)
            {
                return false;
            }
            std::stack<char> st;
            for(int i = 0; i < s.length(); i++)
            {
                char currChar = s[i]; 
                if(currChar == '(' || currChar == '[' || currChar == '{')
                {
                    st.push(currChar);
                }
                else 
                {
                    if(st.empty())
                    {
                        return false;
                    }
                    char topChar = st.top();
                    if((currChar == ')' && topChar == '(') ||
                       (currChar == ']' && topChar == '[') ||
                       (currChar == '}' && topChar == '{'))
                    {
                        st.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
            }
            return st.empty();
        }
};