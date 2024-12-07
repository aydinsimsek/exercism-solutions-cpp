#include <string>
#include <sstream>
#include <stack>

class Solution
{
    public:
        std::string simplifyPath(std::string path)
        {
            std::string res = "";
            std::stringstream ss(path);
            std::stack<std::string> slices;
            std::string slice = "";
            while(std::getline(ss, slice, '/'))
            {
                if(slice.empty() || slice == ".")
                {
                    continue;
                }
                else if(slice == "..")
                {
                    if(!slices.empty())
                    {
                        slices.pop();
                    }
                }
                else
                {
                    slices.push(slice);
                }
            }
            while(!slices.empty())
            {
                slice = slices.top();
                res = "/" + slice + res;
                slices.pop();
            }
            if(res.empty())
            {
                res = "/";
            }
            return res;
        }
};