#include <vector>
#include <string>
#include <stack>

class Solution
{
    public:
        int evalRPN(std::vector<std::string>& tokens)
        {
            std::stack<int> st;
            int firstOperand;
            int secondOperand;
            for(const std::string &token : tokens)
            {
                if(token == "+" || token == "-" || token == "*" || token == "/")
                {
                    secondOperand = st.top();
                    st.pop();
                    firstOperand = st.top();
                    st.pop();
                    if(token == "+")
                    {
                        st.push(firstOperand + secondOperand);
                    }
                    else if(token == "-")
                    {
                        st.push(firstOperand - secondOperand);
                    }
                    else if(token == "*")
                    {
                        st.push(firstOperand * secondOperand);
                    }
                    else
                    {
                        st.push(firstOperand / secondOperand);
                    }
                }
                else
                {
                    st.push(std::stoi(token));
                }
            }
            return st.top();
        }
};